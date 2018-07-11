/********************************************************************************
** Form generated from reading UI file 'printdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTDIALOG_H
#define UI_PRINTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_printdialog
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListView *printview;
    QHBoxLayout *horizontalLayout;
    QPushButton *okbutton;
    QPushButton *okbutton_2;
    QPushButton *printbutton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *printdialog)
    {
        if (printdialog->objectName().isEmpty())
            printdialog->setObjectName(QStringLiteral("printdialog"));
        printdialog->resize(955, 600);
        printdialog->setStyleSheet(QString::fromUtf8("#printdialog{border-image: url(:/\346\226\260\345\211\215\347\274\200/cb8065380cd79123b53fe4beae345982b3b78018.jpg);}"));
        gridLayout_2 = new QGridLayout(printdialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(printdialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        printview = new QListView(printdialog);
        printview->setObjectName(QStringLiteral("printview"));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(16);
        printview->setFont(font);
        printview->setStyleSheet(QLatin1String("background:transparent;color:white;\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px"));

        verticalLayout->addWidget(printview);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okbutton = new QPushButton(printdialog);
        okbutton->setObjectName(QStringLiteral("okbutton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font1.setPointSize(26);
        okbutton->setFont(font1);
        okbutton->setStyleSheet(QString::fromUtf8("QPushButton#okbutton\n"
"{\n"
"border-color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#okbutton:hover\n"
"{\n"
"color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#okbutton:pressed\n"
"{\n"
"color:blue;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"border:transparent;\n"
"}"));

        horizontalLayout->addWidget(okbutton);

        okbutton_2 = new QPushButton(printdialog);
        okbutton_2->setObjectName(QStringLiteral("okbutton_2"));
        okbutton_2->setFont(font1);
        okbutton_2->setStyleSheet(QString::fromUtf8("QPushButton#okbutton_2\n"
"{\n"
"border-color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#okbutton_2:hover\n"
"{\n"
"color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#okbutton_2:pressed\n"
"{\n"
"color:blue;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"border:transparent;\n"
"}"));

        horizontalLayout->addWidget(okbutton_2);

        printbutton = new QPushButton(printdialog);
        printbutton->setObjectName(QStringLiteral("printbutton"));
        printbutton->setFont(font1);
        printbutton->setStyleSheet(QString::fromUtf8("QPushButton#printbutton\n"
"{\n"
"border-color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#printbutton:hover\n"
"{\n"
"color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#printbutton:pressed\n"
"{\n"
"color:blue;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"border:transparent;\n"
"}"));

        horizontalLayout->addWidget(printbutton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 3, 1, 1, 1);


        retranslateUi(printdialog);

        QMetaObject::connectSlotsByName(printdialog);
    } // setupUi

    void retranslateUi(QDialog *printdialog)
    {
        printdialog->setWindowTitle(QApplication::translate("printdialog", "\346\237\245\347\234\213\346\211\200\346\234\211\344\271\246\346\234\254", Q_NULLPTR));
        label->setText(QApplication::translate("printdialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; color:#55aa00;\">\344\271\246\346\234\254\345\210\227\350\241\250</span></p></body></html>", Q_NULLPTR));
        okbutton->setText(QApplication::translate("printdialog", "\351\200\200\345\207\272", Q_NULLPTR));
        okbutton_2->setText(QApplication::translate("printdialog", "\346\270\205\347\251\272", Q_NULLPTR));
        printbutton->setText(QApplication::translate("printdialog", "\346\211\223\345\215\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class printdialog: public Ui_printdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTDIALOG_H
