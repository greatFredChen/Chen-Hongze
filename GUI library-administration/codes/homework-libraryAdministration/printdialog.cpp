#include "printdialog.h"
#include "ui_printdialog.h"
#include<QDebug>
printdialog::printdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::printdialog)
{
    ui->setupUi(this);
    qlist.clear();
}
void printdialog::PrintTree(Tree t)
{
    if(t!=NULL)
    {
        //先序遍历！ 记得，当进行string与QString的转换时（非常不建议用char*转qstring）,一定要用fromlocal8bit(str.data())/tolocal8bit().data()，只有使用local8bit.data才一定不会出现中文乱码！
        sum+=t->num;sum+="\t";sum+=t->name;sum+="\t";sum+=(strcmp(t->Borrow,"0")==0?"In the library":"has been borrowed");sum+=";";
        PrintTree(t->Left);
        PrintTree(t->Right);
    }
}
printdialog::~printdialog()
{
    sum.clear();
    ssum.clear();
    qlist.clear();
    delete ui;
}
void printdialog::closeEvent(QCloseEvent *event)
{
    sum.clear();
    ssum.clear();
    qlist.clear();
    //delete m_model;
    event->accept();
}
void printdialog::on_okbutton_clicked()
{
    sum.clear();
    ssum.clear();
    qlist.clear();
    //delete m_model;
    this->reject();
}
void printdialog::on_printbutton_clicked()
{
    if(this->T==NULL) QMessageBox::warning(this,tr("图书管理系统"),tr("书库中没有书！"),QMessageBox::Ok);
    else{
    PrintTree(this->T);
    ssum=ssum.fromLocal8Bit(sum.data());//把sum转移到qstring!
    qlist=ssum.split(";");//qstring转qstringlist!!
    m_model=new QStringListModel(qlist);
    modelisempty=true;
    ui->printview->setModel(m_model);
    }
}

void printdialog::on_okbutton_2_clicked()
{
    sum.clear();
    ssum.clear();
    qlist.clear();
    if(modelisempty){
    delete m_model;
    modelisempty=false;
    }
}
