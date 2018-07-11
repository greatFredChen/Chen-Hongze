#include "borrowdialog.h"
#include "ui_borrowdialog.h"

borrowdialog::borrowdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::borrowdialog)
{
    ui->setupUi(this);
}

borrowdialog::~borrowdialog()
{
    delete ui;
}

void borrowdialog::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    this->reject();
}

void borrowdialog::on_pushButton_clicked()
{
    if(ui->lineEdit->text().isEmpty())
        QMessageBox::warning(this,QString::fromLocal8Bit("图书管理系统"),QString::fromLocal8Bit("输入为空！"),QMessageBox::Ok);
    else{
    QString str=ui->lineEdit->text();char name[30];
    strcpy(name,str.toLocal8Bit().data());
    this->T=borrower(T,User,name,flag);
    ui->lineEdit->clear();
    if(flag==0)
        QMessageBox::warning(this,QString::fromLocal8Bit("图书管理系统"),QString::fromLocal8Bit("不存在该书！"),QMessageBox::Ok);
    else if(flag==1)
        QMessageBox::warning(this,QString::fromLocal8Bit("图书管理系统"),QString::fromLocal8Bit("该书已经被借出！"),QMessageBox::Ok);
    else{
        QMessageBox::warning(this,QString::fromLocal8Bit("图书管理系统"),QString::fromLocal8Bit("成功借阅！"),QMessageBox::Ok);
        FILE *fp;
        if((fp=fopen("D:/books.txt","w"))==NULL)
        {
            std::cout<<"failed!"<<"\n";
            system("pause");
        }
        SaveTree(this->T,fp);
    }
    }
}
