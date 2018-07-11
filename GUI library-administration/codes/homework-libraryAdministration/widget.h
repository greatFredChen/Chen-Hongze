/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef WIDGET_H
#define WIDGET_H
#include<QTextCodec>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include"ui_widget.h"
#include"logindialog.h"
#include"createdialog.h"
#include"insertdialog.h"
#include"loginbutton.h"
#include"printdialog.h"
#include"searchdialog.h"
#include"registerdialog.h"
#include"deletedialog.h"
#include"borrowdialog.h"
#include"returndialog.h"
#include"printdialog2.h"
#include<QPushButton>
#include<QMediaPlayer>
#include"Book.h"
#include"Log.h"
#include<QSplashScreen>
#include<QMessageBox>
class Widget:public QWidget,public Ui::Widget
{
    Q_OBJECT
public:
    Widget(QWidget *parent=0);
    ~Widget();
    void paintEvent(QPaintEvent *);
    bool okToContinue();//确认内容是否已经更改！
private slots:
    void on_loginbutton_clicked();
    void on_createbutton_clicked();

    void on_insertbutton_clicked();

    void on_printbutton_clicked();

    void on_savebutton_clicked();

    void on_loadbutton_clicked();

    void on_searchbutton_clicked();

    void on_registerbutton_clicked();

    void on_emptybutton_clicked();

    void on_deletebutton_clicked();

    void on_borrowbutton_clicked();

    void on_returnbutton_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::Widget *ui;
    loginfo *User=new loginfo;//登陆之后，logindialog会把User的参数传回来！然后利用这里的User进行操作即可!
    logindialog *Logindialog=new logindialog(User,this);//登陆窗口定义为Widget的子窗口！
    Tree T=NULL;
    bool flag=false;
    bool Haschanged=false;
    createdialog *Createdialog=new createdialog(T,this);
    insertdialog *Insertdialog=new insertdialog(T,this);
    printdialog *Printdialog=new printdialog();
    printdialog2 *Printdialog2=new printdialog2();
    searchdialog *Searchdialog=new searchdialog();
    registerdialog *Registerdialog=new registerdialog();
    deletedialog *Deletedialog=new deletedialog();
    borrowdialog *Borrowdialog=new borrowdialog();
    returndialog *Returndialog=new returndialog();
    QMediaPlayer *Player=new QMediaPlayer;//音乐播放与停止！
    int log=-1;//判断是否已经登陆！普通用户为0，管理员为1.
    FILE *fp;
protected:
    void closeEvent(QCloseEvent *event);//重写关闭函数！以便询问是否保存！
};
#endif
