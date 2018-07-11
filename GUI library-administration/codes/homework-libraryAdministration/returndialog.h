#ifndef RETURNDIALOG_H
#define RETURNDIALOG_H

#include <QDialog>
#include"Book.h"
#include"Log.h"
#include<QString>
#include <QListView>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QModelIndex>
#include<QStringListModel>
#include<QMessageBox>
#include<QCloseEvent>
namespace Ui {
class returndialog;
}

class returndialog : public QDialog
{
    Q_OBJECT

public:
    Tree T;
    loginfo *User=new loginfo;
    explicit returndialog(QWidget *parent = 0);
    ~returndialog();
    void closeEvent(QCloseEvent *event);
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    int flag=0;
    Ui::returndialog *ui;
    QStringListModel *m_model;
    QStringList qlist;
    QString ssum;
    std::string sum;
    bool modelisempty=false;
};

#endif // RETURNDIALOG_H
