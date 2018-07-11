#ifndef DELETEDIALOG_H
#define DELETEDIALOG_H

#include <QDialog>
#include<QMessageBox>
#include"Book.h"
#include"Log.h"
#include<QString>
#include <QListView>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QModelIndex>
#include<QStringListModel>
#include<QTextStream>
namespace Ui {
class deletedialog;
}

class deletedialog : public QDialog
{
    Q_OBJECT

public:
    Tree T;
    Tree Temp;
    explicit deletedialog(QWidget *parent = 0);
    ~deletedialog();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::deletedialog *ui;
    bool flag;
    //增加listview组件，进行结果展示！
    QStringListModel *m_model;
    QStringList qlist;
    QString ssum;
    std::string sum;
    bool modelisempty=false;
};

#endif // DELETEDIALOG_H
