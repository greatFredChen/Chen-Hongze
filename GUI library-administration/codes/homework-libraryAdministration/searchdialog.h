#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H
#include"Book.h"
#include <QDialog>
#include<QMessageBox>
#include"Log.h"
#include <QListView>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QModelIndex>
#include<QStringListModel>
#include<QCloseEvent>
namespace Ui {
class searchdialog;
}

class searchdialog : public QDialog
{
    Q_OBJECT

public:
    Tree T;
    explicit searchdialog(QWidget *parent = 0);
    ~searchdialog();
    void Search(Tree t);
    void closeEvent(QCloseEvent *event);
private slots:
    void on_cancelbutton_clicked();

    void on_okbutton_clicked();

    void on_cancelbutton_2_clicked();

private:
    Ui::searchdialog *ui;
    QStringList qlist;//打印！
    QStringListModel *m_model;//打印!
    QString ssum;
    std::string sum;
    QString compa;//比较！
    bool modelisempty=false;
};

#endif // SEARCHDIALOG_H
