#ifndef PRINTDIALOG_H
#define PRINTDIALOG_H

#include"Book.h"
#include <QDialog>
#include"Log.h"
#include<QMessageBox>
#include<QString>
#include <QListView>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QModelIndex>
#include<QStringListModel>
#include<QCloseEvent>
namespace Ui {
class printdialog;
}

class printdialog : public QDialog
{
    Q_OBJECT

public:
    Tree T;
    explicit printdialog(QWidget *parent=0);
    ~printdialog();
    void PrintTree(Tree t);
    void closeEvent(QCloseEvent *event);
private slots:
    void on_okbutton_clicked();

    void on_printbutton_clicked();

    void on_okbutton_2_clicked();

private:
    Ui::printdialog *ui;
    QStringListModel *m_model;
    QStringList qlist;
    QString ssum;
    std::string sum;
    bool modelisempty=false;
};

#endif // PRINTDIALOG_H
