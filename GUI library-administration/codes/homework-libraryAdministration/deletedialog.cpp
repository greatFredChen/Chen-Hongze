#include "deletedialog.h"
#include "ui_deletedialog.h"

deletedialog::deletedialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deletedialog)
{
    ui->setupUi(this);
    flag=true;
}

deletedialog::~deletedialog()
{
    delete ui;
}
void deletedialog::on_pushButton_2_clicked()
{
    this->reject();
}

void deletedialog::on_pushButton_clicked()
{
    if(ui->textEdit->toPlainText().isEmpty())
    {
        QMessageBox::warning(this,QString::fromLocal8Bit("图书管理系统"),QString::fromLocal8Bit("您输入的信息为空！"),QMessageBox::Ok);
        ui->textEdit->clear();
    }
    else{
    QString strinsert=ui->textEdit->toPlainText();
    QTextStream readstr(&strinsert);
    while(!readstr.atEnd())//输入流,读到尽头之前
    {
        QString name1;
        readstr>>name1;
        char name[100];
        strcpy(name,name1.toLocal8Bit().data());
        if(strcmp(name,"\0")!=0)
        {
            this->Temp=Delete(this->T,name,flag);
        if(!flag)
            sum+="没有这本书！;";
        else{
            this->T=this->Temp;
            sum+=name;sum+="成功删除！;";
        }
        }
    }
    }
    //开始把信息放在listview!
    ssum=ssum.fromLocal8Bit(sum.data());//把sum转移到qstring!
    qlist=ssum.split(";");//qstring转qstringlist!!
    m_model=new QStringListModel(qlist);
    modelisempty=true;
    ui->resultline->setModel(m_model);
}
void deletedialog::on_pushButton_3_clicked()//清除！
{
    ui->textEdit->clear();
    sum.clear();
    ssum.clear();
    qlist.clear();
    if(modelisempty){
    modelisempty=false;
    delete m_model;
    }
}
