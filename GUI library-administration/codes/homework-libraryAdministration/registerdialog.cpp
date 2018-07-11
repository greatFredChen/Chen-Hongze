#include "registerdialog.h"
#include "ui_registerdialog.h"

registerdialog::registerdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registerdialog)
{
    ui->setupUi(this);
}

registerdialog::~registerdialog()
{
    delete ui;
}

void registerdialog::on_pushButton_2_clicked()//退出按钮！
{
    ui->accountline->clear();
    ui->passwordline->clear();
    this->reject();
}

void registerdialog::on_pushButton_clicked()//注册按钮！
{
    //消息框貌似有bug，尝试使用fromlocal8bit!
    if(ui->accountline->text().isEmpty()||ui->passwordline->text().isEmpty())
    {
        QMessageBox::warning(this,QString::fromLocal8Bit("图书管理系统"),QString::fromLocal8Bit("密码或者账号为空！"),QMessageBox::Ok);
        ui->accountline->clear();
        ui->passwordline->clear();
    }
    else
    {
    QString account=ui->accountline->text();
    QString password=ui->passwordline->text();
    char fname[30],fpwd[30];
    strcpy(fname,account.toLocal8Bit().data());strcpy(fpwd,password.toLocal8Bit().data());
    int r=Createuser(fname,fpwd);//=0则失败，=1则成功！
    if(!r) QMessageBox::warning(this,QString::fromLocal8Bit("图书管理系统"),QString::fromLocal8Bit("用户已存在，注册失败！"),QMessageBox::Ok);
    else  QMessageBox::warning(this,QString::fromLocal8Bit("图书管理系统"),QString::fromLocal8Bit("注册成功！"),QMessageBox::Ok);//这时候已经完成写入信息！
    ui->accountline->clear();ui->passwordline->clear();//清空注册信息！
    }
}
