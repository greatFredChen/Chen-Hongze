#ifndef BORROWDIALOG_H
#define BORROWDIALOG_H

#include <QDialog>
#include"Book.h"
#include"Log.h"
#include<QMessageBox>
namespace Ui {
class borrowdialog;
}

class borrowdialog : public QDialog
{
    Q_OBJECT

public:
    loginfo *User;
    Tree T;
    explicit borrowdialog(QWidget *parent = 0);
    ~borrowdialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::borrowdialog *ui;
    int flag;
};

#endif // BORROWDIALOG_H
