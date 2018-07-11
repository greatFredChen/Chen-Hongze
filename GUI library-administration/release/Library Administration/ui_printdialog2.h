/********************************************************************************
** Form generated from reading UI file 'printdialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTDIALOG2_H
#define UI_PRINTDIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_printdialog2
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *okbutton_3;
    QPushButton *okbutton_4;
    QPushButton *printbutton_2;
    QPushButton *printbutton_3;
    QVBoxLayout *verticalLayout;
    QPushButton *okbutton;
    QPushButton *okbutton_2;
    QPushButton *printbutton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *printdialog2)
    {
        if (printdialog2->objectName().isEmpty())
            printdialog2->setObjectName(QStringLiteral("printdialog2"));
        printdialog2->resize(865, 533);
        QIcon icon;
        icon.addFile(QStringLiteral(":/btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        printdialog2->setWindowIcon(icon);
        printdialog2->setStyleSheet(QString::fromUtf8("#printdialog2{border-image: url(:/\346\226\260\345\211\215\347\274\200/cb8065380cd79123b53fe4beae345982b3b78018.jpg);}"));
        gridLayout = new QGridLayout(printdialog2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(printdialog2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        tableView = new QTableView(printdialog2);
        tableView->setObjectName(QStringLiteral("tableView"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(14);
        tableView->setFont(font);
        tableView->setStyleSheet(QLatin1String("background:transparent;color:black;\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"QHeaderView::section:vertical {\n"
"    background: transparent;\n"
"        width: 30px;\n"
"};\n"
"QHeaderView::section:horizontal {\n"
"    background: transparent;\n"
"        height: 30px;\n"
"}"));
        tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableView->horizontalHeader()->setDefaultSectionSize(200);
        tableView->horizontalHeader()->setMinimumSectionSize(50);
        tableView->verticalHeader()->setDefaultSectionSize(80);
        tableView->verticalHeader()->setMinimumSectionSize(60);

        verticalLayout_2->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okbutton_3 = new QPushButton(printdialog2);
        okbutton_3->setObjectName(QStringLiteral("okbutton_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font1.setPointSize(26);
        okbutton_3->setFont(font1);
        okbutton_3->setStyleSheet(QString::fromUtf8("QPushButton#okbutton_3\n"
"{\n"
"border-color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#okbutton_3:hover\n"
"{\n"
"color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#okbutton_3:pressed\n"
"{\n"
"color:blue;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"border:transparent;\n"
"}"));

        horizontalLayout->addWidget(okbutton_3);

        okbutton_4 = new QPushButton(printdialog2);
        okbutton_4->setObjectName(QStringLiteral("okbutton_4"));
        okbutton_4->setFont(font1);
        okbutton_4->setStyleSheet(QString::fromUtf8("QPushButton#okbutton_4\n"
"{\n"
"border-color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#okbutton_4:hover\n"
"{\n"
"color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#okbutton_4:pressed\n"
"{\n"
"color:blue;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"border:transparent;\n"
"}"));

        horizontalLayout->addWidget(okbutton_4);

        printbutton_2 = new QPushButton(printdialog2);
        printbutton_2->setObjectName(QStringLiteral("printbutton_2"));
        printbutton_2->setFont(font1);
        printbutton_2->setStyleSheet(QString::fromUtf8("QPushButton#printbutton_2\n"
"{\n"
"border-color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#printbutton_2:hover\n"
"{\n"
"color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#printbutton_2:pressed\n"
"{\n"
"color:blue;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"border:transparent;\n"
"}"));

        horizontalLayout->addWidget(printbutton_2);

        printbutton_3 = new QPushButton(printdialog2);
        printbutton_3->setObjectName(QStringLiteral("printbutton_3"));
        printbutton_3->setFont(font1);
        printbutton_3->setStyleSheet(QString::fromUtf8("QPushButton#printbutton_3\n"
"{\n"
"border-color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#printbutton_3:hover\n"
"{\n"
"color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#printbutton_3:pressed\n"
"{\n"
"color:blue;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"border:transparent;\n"
"}"));

        horizontalLayout->addWidget(printbutton_3);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        okbutton = new QPushButton(printdialog2);
        okbutton->setObjectName(QStringLiteral("okbutton"));
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

        verticalLayout->addWidget(okbutton);

        okbutton_2 = new QPushButton(printdialog2);
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

        verticalLayout->addWidget(okbutton_2);

        printbutton = new QPushButton(printdialog2);
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

        verticalLayout->addWidget(printbutton);


        gridLayout->addLayout(verticalLayout, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);


        retranslateUi(printdialog2);

        QMetaObject::connectSlotsByName(printdialog2);
    } // setupUi

    void retranslateUi(QDialog *printdialog2)
    {
        printdialog2->setWindowTitle(QApplication::translate("printdialog2", "\346\211\223\345\215\260", Q_NULLPTR));
        label->setText(QApplication::translate("printdialog2", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; color:#55aa00;\">\344\271\246\346\234\254\345\210\227\350\241\250</span></p></body></html>", Q_NULLPTR));
        okbutton_3->setText(QApplication::translate("printdialog2", "\344\270\212\344\270\200\351\241\265", Q_NULLPTR));
        okbutton_4->setText(QApplication::translate("printdialog2", "\344\270\213\344\270\200\351\241\265", Q_NULLPTR));
        printbutton_2->setText(QApplication::translate("printdialog2", "\351\246\226\351\241\265", Q_NULLPTR));
        printbutton_3->setText(QApplication::translate("printdialog2", "\346\234\253\351\241\265", Q_NULLPTR));
        okbutton->setText(QApplication::translate("printdialog2", "\351\200\200\345\207\272", Q_NULLPTR));
        okbutton_2->setText(QApplication::translate("printdialog2", "\346\270\205\347\251\272", Q_NULLPTR));
        printbutton->setText(QApplication::translate("printdialog2", "\346\211\223\345\215\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class printdialog2: public Ui_printdialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTDIALOG2_H
