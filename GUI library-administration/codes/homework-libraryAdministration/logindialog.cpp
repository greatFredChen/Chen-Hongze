#include "logindialog.h"
#include "ui_logindialog.h"
logindialog::logindialog(loginfo *user,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logindialog)
{
    ui->setupUi(this);
    User=user;
}
logindialog::~logindialog()
{
    delete ui;
}
void logindialog::on_logincancelbutton_clicked()
{
    this->reject();
}
void logindialog::on_loginokbutton_clicked()//进行登录的确认！
{
    //从行编辑器中获得字符串并转换为char类型!
    if(ui->accountline->text().isEmpty()||ui->passwordline->text().isEmpty())
    {
        QMessageBox::warning(this,tr("图书管理系统"),tr("账号或密码为空！"),QMessageBox::Ok);
        ui->accountline->clear();
        ui->passwordline->clear();
    }
    else{
    QString straccount=ui->accountline->text();
    QString strpassword=ui->passwordline->text();
    strcpy(User->Username,straccount.toLocal8Bit().data());//这里Username一定不能够用指针！！！因为函数结束之后销毁指针，会导致乱码！！！
    strcpy(User->password,strpassword.toLocal8Bit().data());//不可以乱用指针！！！
    encrypt(User->password);
    //开始验证账户密码
    if(!Checkuser(User))
    {
        QMessageBox::warning(this,tr("图书管理系统"),tr("账号或密码错误！"),QMessageBox::Ok);
        ui->accountline->clear();
        ui->passwordline->clear();
        strcpy(User->Username,"Not login");
    }
    else
    {
        ui->accountline->clear();
        ui->passwordline->clear();
        QMessageBox::warning(this,tr("图书管理系统"),tr("登入成功！"),QMessageBox::Ok);
        this->reject();
    }
   }
}
