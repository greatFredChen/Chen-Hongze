/********************************************************************************
** Form generated from reading UI file 'searchdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_searchdialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *searchline;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QListView *resultline;
    QVBoxLayout *verticalLayout;
    QPushButton *cancelbutton;
    QPushButton *cancelbutton_2;
    QPushButton *okbutton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *searchdialog)
    {
        if (searchdialog->objectName().isEmpty())
            searchdialog->setObjectName(QStringLiteral("searchdialog"));
        searchdialog->resize(693, 633);
        QIcon icon;
        icon.addFile(QStringLiteral(":/btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchdialog->setWindowIcon(icon);
        searchdialog->setStyleSheet(QString::fromUtf8("#searchdialog{border-image: url(:/\346\226\260\345\211\215\347\274\200/cb8065380cd79123b53fe4beae345982b3b78018.jpg);}"));
        verticalLayout_5 = new QVBoxLayout(searchdialog);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(searchdialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_4->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(searchdialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        searchline = new QLineEdit(searchdialog);
        searchline->setObjectName(QStringLiteral("searchline"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font.setPointSize(16);
        searchline->setFont(font);
        searchline->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"background:transparent;color:white;"));

        horizontalLayout->addWidget(searchline);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(searchdialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        resultline = new QListView(searchdialog);
        resultline->setObjectName(QStringLiteral("resultline"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font1.setPointSize(16);
        resultline->setFont(font1);
        resultline->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"background:transparent;color:white;"));

        verticalLayout_3->addWidget(resultline);


        verticalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cancelbutton = new QPushButton(searchdialog);
        cancelbutton->setObjectName(QStringLiteral("cancelbutton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font2.setPointSize(18);
        cancelbutton->setFont(font2);
        cancelbutton->setStyleSheet(QString::fromUtf8("QPushButton#cancelbutton\n"
"{\n"
"border-color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#cancelbutton:hover\n"
"{\n"
"color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#cancelbutton:pressed\n"
"{\n"
"color:blue;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"border:transparent;\n"
"}"));

        verticalLayout->addWidget(cancelbutton);

        cancelbutton_2 = new QPushButton(searchdialog);
        cancelbutton_2->setObjectName(QStringLiteral("cancelbutton_2"));
        cancelbutton_2->setFont(font2);
        cancelbutton_2->setStyleSheet(QString::fromUtf8("QPushButton#cancelbutton_2\n"
"{\n"
"border-color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#cancelbutton_2:hover\n"
"{\n"
"color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#cancelbutton_2:pressed\n"
"{\n"
"color:blue;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"border:transparent;\n"
"}"));

        verticalLayout->addWidget(cancelbutton_2);

        okbutton = new QPushButton(searchdialog);
        okbutton->setObjectName(QStringLiteral("okbutton"));
        okbutton->setFont(font2);
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


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_2);


        retranslateUi(searchdialog);

        QMetaObject::connectSlotsByName(searchdialog);
    } // setupUi

    void retranslateUi(QDialog *searchdialog)
    {
        searchdialog->setWindowTitle(QApplication::translate("searchdialog", "\346\220\234\347\264\242\344\271\246\346\234\254", Q_NULLPTR));
        label->setText(QApplication::translate("searchdialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; color:#00ff7f;\">\346\237\245\346\211\276</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("searchdialog", "<html><head/><body><p><span style=\" font-size:18pt; color:#ff557f;\">\344\271\246\345\220\215\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("searchdialog", "<html><head/><body><p><span style=\" font-size:16pt; color:#ff0000;\">\346\237\245\346\211\276\347\273\223\346\236\234</span></p></body></html>", Q_NULLPTR));
        cancelbutton->setText(QApplication::translate("searchdialog", "\345\217\226\346\266\210", Q_NULLPTR));
        cancelbutton_2->setText(QApplication::translate("searchdialog", "\346\270\205\347\251\272", Q_NULLPTR));
        okbutton->setText(QApplication::translate("searchdialog", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class searchdialog: public Ui_searchdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
