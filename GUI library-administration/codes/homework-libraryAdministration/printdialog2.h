#ifndef PRINTDIALOG2_H
#define PRINTDIALOG2_H

#include <QDialog>
#include"Book.h"
#include"Log.h"
#include<QStandardItemModel>
#include<QTableView>
#include<QScrollBar>
namespace Ui {
class printdialog2;
}

class printdialog2 : public QDialog
{
    Q_OBJECT

public:
    Tree T;
    explicit printdialog2(QWidget *parent = 0);
    ~printdialog2();
    void PrintTree(Tree t);
private slots:
    void on_okbutton_2_clicked();

    void on_okbutton_clicked();

    void on_printbutton_clicked();

    void on_okbutton_3_clicked();

    void on_okbutton_4_clicked();

    void on_printbutton_2_clicked();

    void on_printbutton_3_clicked();

private:
    Ui::printdialog2 *ui;
    QStandardItemModel *m_model;
    bool flag=false;
    int rowcount=0;//¼ÆÊý£¡
};

#endif // PRINTDIALOG2_H
