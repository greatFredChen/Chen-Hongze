#include "loginbutton.h"
#include <QtWidgets>

loginbutton::loginbutton(QWidget *parent)
    : QPushButton(parent)
    , curStatus_(ST_INIT)
{
}

void loginbutton::setImages(QString &normalName, QString &horverName, QString &pressName)
{
    curStatus_ = ST_NORMAL;
    imageName_[ST_NORMAL] = normalName;
    imageName_[ST_HOVER] = horverName;
    imageName_[ST_PRESS] = pressName;
}

void loginbutton::enterEvent(QEvent *)
{
    if (curStatus_ == ST_INIT) {
        return;
    }

    curStatus_ = ST_HOVER;
    update();
}

void loginbutton::leaveEvent(QEvent *)
{
    if (curStatus_ == ST_INIT) {
        return;
    }

    curStatus_ = ST_NORMAL;
    update();
}

void loginbutton::mousePressEvent(QMouseEvent *event)
{
    if (curStatus_ == ST_INIT) {
        return;
    }

    if (event->button() == Qt::LeftButton) {
        curStatus_ = ST_PRESS;
        update();
    }
}

void loginbutton::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        if (curStatus_ != ST_INIT) {
            curStatus_ = ST_HOVER;
            update();
        }
        // 鼠标在弹起的时候光标在按钮上才激发clicked信号
        if (rect().contains(event->pos())) {
            emit clicked();
        }
    }
}

void loginbutton::paintEvent(QPaintEvent *event)
{
    if (curStatus_ == ST_INIT) {
        QPushButton::paintEvent(event);
        return;
    }

    QPainter painter(this);
    QPixmap pixmap(imageName_[curStatus_]);
    painter.drawPixmap(rect(), pixmap);
}
