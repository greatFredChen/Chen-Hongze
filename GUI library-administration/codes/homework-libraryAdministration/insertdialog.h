#ifndef INSERTDIALOG_H
#define INSERTDIALOG_H
#include <QDialog>
#include"Book.h"
#include"Log.h"
#include<QTextCodec>
#include<QString>
#include<QMessageBox>
namespace Ui {
class insertdialog;
}

class insertdialog : public QDialog
{
    Q_OBJECT

public:
    Tree T;
    explicit insertdialog(Tree t, QWidget *parent = 0);
    ~insertdialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::insertdialog *ui;
};

#endif // INSERTDIALOG_H
