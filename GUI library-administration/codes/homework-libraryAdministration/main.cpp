#include "widget.h"
#include<QApplication>
#include"Book.h"
#include"Log.h"
#include<QtGui>
#include<QSplashScreen>
#include<QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
    QSplashScreen *splash=new QSplashScreen;
    splash->setPixmap(QPixmap(":/启动界面　まより（成稿）.jpg"));
    splash->show();
    //程序延时启动
    QDateTime n=QDateTime::currentDateTime();
    QDateTime now;
    do{
        now=QDateTime::currentDateTime();
        a.processEvents();
    } while (n.secsTo(now)<=1.5);//1.5为需要延时的秒数
    splash->hide();
    splash->setPixmap(QPixmap(":/启动界面完成　まより（成稿）.jpg"));
    splash->show();
    do{
        now=QDateTime::currentDateTime();
        a.processEvents();
    }while (n.secsTo(now)<=1.5);//延时1.5s
    //开始运行主界面！
    Widget *basewindow=new Widget;
    splash->finish(basewindow);
    basewindow->show();
    qDebug()<<"current currentPath: "<<QDir::currentPath();
    return a.exec();
}
