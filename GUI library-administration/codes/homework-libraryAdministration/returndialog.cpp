#include "returndialog.h"
#include "ui_returndialog.h"

returndialog::returndialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::returndialog)
{
    ui->setupUi(this);
}
returndialog::~returndialog()
{
    delete ui;
}
void returndialog::closeEvent(QCloseEvent *event)//重写关闭函数！
{
    sum.clear();
    ssum.clear();
    qlist.clear();
    //delete m_model;
    event->accept();
}
void returndialog::on_pushButton_2_clicked()//取消按钮！
{
    sum.clear();
    ssum.clear();
    qlist.clear();
    //delete m_model;
    this->reject();
}
void returndialog::on_pushButton_clicked()//确认按钮！
{
    if(ui->lineEdit->text().isEmpty())
        QMessageBox::warning(this,QString::fromLocal8Bit("图书管理系统"),QString::fromLocal8Bit("输入为空！"),QMessageBox::Ok);
    else{
    QString str=ui->lineEdit->text();
    char name[30];strcpy(name,str.toLocal8Bit().data());
    std::cout<<name<<"\n";//测试代码
    this->T=returner(this->T,this->User,flag,name);
    std::cout<<flag<<"\n";//测试代码
    if(flag==0)
        QMessageBox::warning(this,QString::fromLocal8Bit("图书管理系统"),QString::fromLocal8Bit("查无此书！"),QMessageBox::Ok);
    else if(flag==4)
        QMessageBox::warning(this,QString::fromLocal8Bit("图书管理系统"),QString::fromLocal8Bit("该书已经在图书馆中！"),QMessageBox::Ok);
    else if(flag==2)
        QMessageBox::warning(this,QString::fromLocal8Bit("图书管理系统"),QString::fromLocal8Bit("该书被其他人借走，无需您归还！"),QMessageBox::Ok);
    else{
        QMessageBox::warning(this,QString::fromLocal8Bit("图书管理系统"),QString::fromLocal8Bit("成功归还!"),QMessageBox::Ok);
        FILE *fp;
        if((fp=fopen("D:/books.txt","w"))==NULL)
        {
            std::cout<<"failed!"<<"\n";
            system("pause");
        }
        SaveTree(this->T,fp);
    }
    ui->lineEdit->clear();
    }
}

void returndialog::on_pushButton_3_clicked()//查看按钮
{
    FindBorrow(this->T,User,sum);
    ssum=ssum.fromLocal8Bit(sum.data());
    qlist=ssum.split(";");
    m_model=new QStringListModel(qlist);
    modelisempty=true;
    ui->listView->setModel(m_model);
}

void returndialog::on_pushButton_4_clicked()//清空按钮
{
    sum.clear();
    ssum.clear();
    qlist.clear();
    if(modelisempty){
    delete m_model;
    modelisempty=false;
    }
}
