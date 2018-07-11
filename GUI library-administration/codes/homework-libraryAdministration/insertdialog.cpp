#include "insertdialog.h"
#include "ui_insertdialog.h"
#include<QTextStream>
insertdialog::insertdialog(Tree t, QWidget *parent) ://可能报错，注意OOP实现部分参数不可以带默认值！！
    QDialog(parent),
    ui(new Ui::insertdialog)
{
    ui->setupUi(this);
    T=t;
}
insertdialog::~insertdialog()
{
    delete ui;
}

void insertdialog::on_pushButton_2_clicked()
{
    this->reject();
}

void insertdialog::on_pushButton_clicked()
{
    if(ui->textEdit->toPlainText().isEmpty())
    {
        QMessageBox::warning(this,tr("图书管理系统"),tr("您输入的信息为空！"),QMessageBox::Ok);
        ui->textEdit->clear();
    }
    else{
    QString strinsert=ui->textEdit->toPlainText();
    QTextStream readstr(&strinsert);
    while(!readstr.atEnd())//输入流,读到尽头之前
    {
        QString name1,num1,borrow1;
        readstr>>num1>>name1>>borrow1;
        char name[100],borrow[100],num[30];
        strcpy(name,name1.toLocal8Bit().data());
        strcpy(num,num1.toLocal8Bit().data());
        strcpy(borrow,borrow1.toLocal8Bit().data());
        std::cout<<num<<name<<borrow<<"\n";//这里是测试代码
        if(strcmp(name,"\0")!=0)
        this->T=Insert(this->T,num,name,borrow);
    }
    ui->textEdit->clear();
    QMessageBox::warning(this,tr("图书管理系统"),tr("插入成功！"),QMessageBox::Ok);
    this->reject();
    }
}
