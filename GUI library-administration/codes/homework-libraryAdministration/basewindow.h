#ifndef BASEWINDOW_H
#define BASEWINDOW_H

#include <QDialog>

namespace Ui {
class basewindow;
}

class basewindow : public QDialog
{
    Q_OBJECT

public:
    explicit basewindow(QWidget *parent = 0);
    ~basewindow();

private:
    Ui::basewindow *ui;
};

#endif // BASEWINDOW_H
