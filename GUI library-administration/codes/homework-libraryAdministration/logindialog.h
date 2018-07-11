#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H
#include <QDialog>
#include"Log.h"
#include"Book.h"
#include<QMessageBox>
namespace Ui {
class logindialog;
}

class logindialog : public QDialog
{
    Q_OBJECT

public:
    explicit logindialog(loginfo *user,QWidget *parent=0);
    ~logindialog();
private slots:
    void on_logincancelbutton_clicked();
    void on_loginokbutton_clicked();
private:
    Ui::logindialog *ui;
    loginfo *User=new loginfo;
};
#endif // LOGINDIALOG_H
