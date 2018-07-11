#-------------------------------------------------
#
# Project created by QtCreator 2018-04-30T23:53:43
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = homework-libraryAdministration
TEMPLATE = app
# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp \
    Log.cpp \
    Book.cpp \
    logindialog.cpp \
    createdialog.cpp \
    insertdialog.cpp \
    printdialog.cpp \
    searchdialog.cpp \
    registerdialog.cpp \
    deletedialog.cpp \
    borrowdialog.cpp \
    returndialog.cpp \
    printdialog2.cpp

HEADERS += \
        widget.h \
    Log.h \
    Book.h \
    logindialog.h \
    createdialog.h \
    insertdialog.h \
    printdialog.h \
    searchdialog.h \
    registerdialog.h \
    deletedialog.h \
    borrowdialog.h \
    returndialog.h \
    printdialog2.h

FORMS += \
        widget.ui \
    logindialog.ui \
    createdialog.ui \
    insertdialog.ui \
    printdialog.ui \
    searchdialog.ui \
    registerdialog.ui \
    deletedialog.ui \
    borrowdialog.ui \
    returndialog.ui \
    printdialog2.ui

RESOURCES += \
    pictures.qrc \
    buttions.qrc \
    appico.qrc

DISTFILES +=
#添加/更改exe文件图像！！！
#RC_ICONS=xxx.ico!!!
RC_ICONS=app.ico
