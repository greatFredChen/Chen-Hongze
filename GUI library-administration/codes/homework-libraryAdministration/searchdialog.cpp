#include "searchdialog.h"
#include "ui_searchdialog.h"
#include<QDebug>
searchdialog::searchdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchdialog)
{
    ui->setupUi(this);
}
void searchdialog::Search(Tree t)
{
    if(t==NULL)
    {
        sum+="404 Not found!";sum+=";";
        return;
    }
    else if(t!=NULL)
    {
        //先转成string.再转成qstring!
        /*std::string a;a+=t->name;
        QString str=str.fromLocal8Bit(a.data());
        int r=QString::compare(compa,str);
        qDebug()<<str<<compa<<" "<<r;//这里是测试代码！*/
        //试下char *
        char name[30];
        strcpy(name,compa.toLocal8Bit().data());
        int r=strcmp(name,t->name);
        std::cout<<name<<" "<<t->name<<" "<<r<<"\n";
        if(r<0)//输入的书字典序大于当前结点，向右！
            Search(t->Left);
        else if(r>0)
            Search(t->Right);
        else
        {
            sum+=t->num;sum+="\t";sum+=t->name;sum+="\t";sum+=(strcmp(t->Borrow,"0")==0?"In the library":"Has been borrowed");sum+=";";
        }
    }
}
searchdialog::~searchdialog()
{
    delete ui;
}
void searchdialog::closeEvent(QCloseEvent *event)
{
    sum.clear();
    ssum.clear();
    qlist.clear();
    ui->searchline->clear();
    event->accept();
}
void searchdialog::on_cancelbutton_clicked()
{
    sum.clear();
    ssum.clear();
    qlist.clear();
    ui->searchline->clear();
    this->reject();
}
void searchdialog::on_okbutton_clicked()
{
    //先读取！
    if(ui->searchline->text().isEmpty())
    {
        QMessageBox::warning(this,QString::fromLocal8Bit("图书管理系统"),QString::fromLocal8Bit("您的输入为空！"),QMessageBox::Ok);
        ui->searchline->clear();
    }
    else{
    compa=ui->searchline->text();//当前搜索书目！
    Search(this->T);
    ssum=ssum.fromLocal8Bit(sum.data());
    qlist=ssum.split(";");//qstring转qstringlist!!
    m_model=new QStringListModel(qlist);
    ui->resultline->setModel(m_model);
    modelisempty=true;
    ui->searchline->clear();
    }
}

void searchdialog::on_cancelbutton_2_clicked()
{
    sum.clear();
    ssum.clear();
    qlist.clear();
    if(modelisempty){
    modelisempty=false;
    delete m_model;
    }
}
