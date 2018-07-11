#ifndef CREATEDIALOG_H
#define CREATEDIALOG_H
#include <QDialog>
#include"Book.h"
#include"Log.h"
#include<QMessageBox>
namespace Ui {
class createdialog;
}

class createdialog : public QDialog
{
    Q_OBJECT
public:
    Tree T;
    explicit createdialog(Tree t,QWidget *parent = 0);
    ~createdialog();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::createdialog *ui;
};

#endif // CREATEDIALOG_H
