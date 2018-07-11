#include "createdialog.h"
#include "ui_createdialog.h"
#include<QMessageBox>
createdialog::createdialog(Tree t, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createdialog)
{
    ui->setupUi(this);
    t=T;
    //std::cout<<t->name<<t->num<<"\n";
}
createdialog::~createdialog()
{
    delete ui;
}
void createdialog::on_pushButton_2_clicked()
{
    this->reject();
}
void createdialog::on_pushButton_clicked()
{
    if(ui->numberline->text().isEmpty()||ui->nameline->text().isEmpty())
    {
        QMessageBox::warning(this,tr("图书管理系统"),tr("序号或者书名为空！"),QMessageBox::Ok);
        ui->nameline->clear();
        ui->numberline->clear();
    }
    else{
    QString strbooknum=ui->numberline->text();
    QString strbookname=ui->nameline->text();
    char name[100];
    strcpy(name,strbookname.toLocal8Bit().data());
    char num[30];
    strcpy(num,strbooknum.toLocal8Bit().data());
    T=Create(num,name);
    ui->numberline->clear();
    ui->nameline->clear();
    QMessageBox::warning(this,tr("图书管理系统"),tr("创建成功！"),QMessageBox::Ok);
    this->reject();
    }
}
