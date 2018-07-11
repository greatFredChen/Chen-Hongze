#include "basewindow.h"
#include "ui_basewindow.h"

basewindow::basewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::basewindow)
{
    ui->setupUi(this);
    this->setObjectName("basewindow");
    this->setStyleSheet("QDialog#basewindow{border-image:url(cb8065380cd79123b53fe4beae345982b3b78018.jpg)}");
}
basewindow::~basewindow()
{
    delete ui;
}
