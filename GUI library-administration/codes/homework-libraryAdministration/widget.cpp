#include<QtGui>
#include"widget.h"
#include<QMessageBox>
#include"Book.h"
#include"Log.h"
Widget::Widget(QWidget *parent):QWidget(parent)
{
    T = LoadTree(T);
    strcpy(User->Username,"Not login");
    //这里是测试代码
   // std::cout<<T->num<<" "<<T->name<<" "<<T->Borrow<<"\n";//测试代码
    Player->setMedia(QUrl::fromLocalFile("D:\\bgm.mp3"));
    Player->setVolume(100);
    //ui->checkBox->setTristate();//三态框！
    setupUi(this);
}
Widget::~Widget()
{
    delete ui;
}
void Widget::paintEvent(QPaintEvent *)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
bool Widget::okToContinue()
{
    if(flag)
    {
        int r=QMessageBox::warning(this,tr("图书管理系统"),tr("该程序已经被改动，\n"
                                                        "请问您是否保存修改？"),QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);
        if(r==QMessageBox::Yes)
        {
            if((fp=fopen("D:/books.txt","w"))==NULL)
            {
                std::cout<<"failed!"<<"\n";
                system("pause");
                return false;
            }
            SaveTree(T,fp);
        }
        else if(r==QMessageBox::Cancel)
        {
            return false;
        }
    }
    return true;
}
void Widget::closeEvent(QCloseEvent *event)//确认内容是否已经更改！
{
    if(okToContinue())
    {
        std::cout<<"0000"<<"\n";
        event->accept();
    }
    else
        event->ignore();
}
void Widget::on_loginbutton_clicked()//弹出以及关闭登陆窗口！
{
    if(log==-1)
    {
        Logindialog->exec();//模态对话框！！阻塞操作!
    if(strcmp(User->Username,"Not login")==0)
        log=-1;
    else if(strcmp(User->Username,"Admin")==0)
        log=1;
    else
        log=0;
   //std::cout<<log<<"\n";
    std::cout<<User->Username<<"\n";//测试代码！
    //这里是测试代码
    //std::cout<<T->name<<"\n";
    }
    else
    {
        log=-1;
        QMessageBox::warning(this,tr("图书管理系统"),tr("成功登出！"),QMessageBox::Ok);
    }
}
void Widget::on_createbutton_clicked()//点击生成书目！！
{
    std::cout<<log<<"\n";//测试代码
    if(log==-1)
        QMessageBox::warning(this,tr("图书管理系统"),tr("请先登陆！"),QMessageBox::Ok);
    else if(log==0)
        QMessageBox::warning(this,tr("图书管理系统"),tr("需要管理员权限！"),QMessageBox::Ok);
    else
    {
        Createdialog->T=this->T;
        Createdialog->exec();
        this->T=Createdialog->T;
        flag=true;
    }
   // std::cout<<T->num<<" "<<T->name<<" "<<T->Borrow<<"\n";//测试代码
}
void Widget::on_insertbutton_clicked()
{
    if(log==-1)
        QMessageBox::warning(this,tr("图书管理系统"),tr("请先登陆！"),QMessageBox::Ok);
    else if(log==0)
        QMessageBox::warning(this,tr("图书管理系统"),tr("需要管理员权限！"),QMessageBox::Ok);
    else{
        Insertdialog->T=this->T;
        Insertdialog->exec();
        this->T=Insertdialog->T;
        flag=true;
        std::cout<<T->num<<" "<<T->name<<" "<<T->Borrow<<"\n";//测试代码
    }
}

void Widget::on_printbutton_clicked()
{
    Printdialog2->T=this->T;
    Printdialog2->exec();
}

void Widget::on_savebutton_clicked()
{
    if(log==-1)
        QMessageBox::warning(this,tr("图书管理系统"),tr("请先登陆！"),QMessageBox::Ok);
    else if(log==0)
        QMessageBox::warning(this,tr("图书管理系统"),tr("需要管理员权限！"),QMessageBox::Ok);
    else
    {
        if((fp=fopen("D:/books.txt","w"))==NULL)
    {
        std::cout<<"无法打开books.txt!"<<"\n";
        system("pause");
    }//抛出异常！
    SaveTree(this->T,fp);
    flag=false;
    QMessageBox::warning(this,tr("图书管理系统"),tr("保存成功！"),QMessageBox::Ok);
    }
}

void Widget::on_loadbutton_clicked()
{
    if(log==-1)
        QMessageBox::warning(this,tr("图书管理系统"),tr("请先登陆！"),QMessageBox::Ok);
    else if(log==0)
        QMessageBox::warning(this,tr("图书管理系统"),tr("需要管理员权限！"),QMessageBox::Ok);
    else
    {
        if((fp=fopen("D:/books.txt","r"))==NULL)
        {
        std::cout<<"无法打开books.txt!"<<"\n";
        system("pause");
        }//抛出异常！
    this->T=LoadTree(this->T);
    QMessageBox::warning(this,tr("图书管理系统"),tr("读取成功！"),QMessageBox::Ok);
    }
}

void Widget::on_searchbutton_clicked()
{
    Searchdialog->T=this->T;
    Searchdialog->exec();
}

void Widget::on_registerbutton_clicked()
{
    if(log==-1)
        QMessageBox::warning(this,tr("图书管理系统"),tr("请先登陆！"),QMessageBox::Ok);
    else if(log==0)
        QMessageBox::warning(this,tr("图书管理系统"),tr("需要管理员权限！"),QMessageBox::Ok);
    else
    {
        Registerdialog->exec();
    }
}

void Widget::on_emptybutton_clicked()
{
    //清空书目！
    if(log==-1)
        QMessageBox::warning(this,tr("图书管理系统"),tr("请先登陆！"),QMessageBox::Ok);
    else if(log==0)
        QMessageBox::warning(this,tr("图书管理系统"),tr("需要管理员权限！"),QMessageBox::Ok);
    else{
    this->T=EmptyBook(this->T);
    flag=true;
    QMessageBox::warning(this,tr("图书管理系统"),tr("清空成功！"),QMessageBox::Ok);
    }
}
void Widget::on_deletebutton_clicked()
{
    if(log==-1)
        QMessageBox::warning(this,tr("图书管理系统"),tr("请先登陆！"),QMessageBox::Ok);
    else if(log==0)
        QMessageBox::warning(this,tr("图书管理系统"),tr("需要管理员权限！"),QMessageBox::Ok);
    else{
    Deletedialog->T=this->T;
    Deletedialog->exec();
    this->T=Deletedialog->T;
    flag=true;
    }
}

void Widget::on_borrowbutton_clicked()//借书！
{
    if(log==-1)
        QMessageBox::warning(this,tr("图书管理系统"),tr("请先登陆！"),QMessageBox::Ok);
    else{
    Borrowdialog->T=this->T;
    Borrowdialog->User=this->User;
    Borrowdialog->exec();
    this->T=Borrowdialog->T;//更新！
    this->User=Borrowdialog->User;
    flag=false;
    }
}

void Widget::on_returnbutton_clicked()
{
    if(log==-1)
        QMessageBox::warning(this,tr("图书管理系统"),tr("请先登陆！"),QMessageBox::Ok);
    else
    {
        Returndialog->T=this->T;
        Returndialog->User=this->User;
        Returndialog->exec();
        this->T=Returndialog->T;//更新
        this->User=Returndialog->User;
        flag=false;
    }
}
void Widget::on_checkBox_stateChanged(int arg1)//bgm播放!
{
    if(arg1==Qt::Checked)
        Player->play();
    else
        Player->pause();
}
