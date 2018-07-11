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
        //��ת��string.��ת��qstring!
        /*std::string a;a+=t->name;
        QString str=str.fromLocal8Bit(a.data());
        int r=QString::compare(compa,str);
        qDebug()<<str<<compa<<" "<<r;//�����ǲ��Դ��룡*/
        //����char *
        char name[30];
        strcpy(name,compa.toLocal8Bit().data());
        int r=strcmp(name,t->name);
        std::cout<<name<<" "<<t->name<<" "<<r<<"\n";
        if(r<0)//��������ֵ�����ڵ�ǰ��㣬���ң�
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
    //�ȶ�ȡ��
    if(ui->searchline->text().isEmpty())
    {
        QMessageBox::warning(this,QString::fromLocal8Bit("ͼ�����ϵͳ"),QString::fromLocal8Bit("��������Ϊ�գ�"),QMessageBox::Ok);
        ui->searchline->clear();
    }
    else{
    compa=ui->searchline->text();//��ǰ������Ŀ��
    Search(this->T);
    ssum=ssum.fromLocal8Bit(sum.data());
    qlist=ssum.split(";");//qstringתqstringlist!!
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
