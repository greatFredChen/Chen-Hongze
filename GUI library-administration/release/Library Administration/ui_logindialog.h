/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logindialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *loginokbutton;
    QPushButton *logincancelbutton;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *accountlabel;
    QLineEdit *accountline;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwordlabel;
    QLineEdit *passwordline;

    void setupUi(QDialog *logindialog)
    {
        if (logindialog->objectName().isEmpty())
            logindialog->setObjectName(QStringLiteral("logindialog"));
        logindialog->resize(746, 433);
        logindialog->setWindowOpacity(1);
        logindialog->setStyleSheet(QString::fromUtf8("#logindialog{border-image: url(:/\346\226\260\345\211\215\347\274\200/\347\237\263\345\244\264\351\227\2502.jpg);}\n"
""));
        layoutWidget = new QWidget(logindialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 290, 521, 44));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        loginokbutton = new QPushButton(layoutWidget);
        loginokbutton->setObjectName(QStringLiteral("loginokbutton"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(20);
        loginokbutton->setFont(font);
        loginokbutton->setStyleSheet(QString::fromUtf8("QPushButton#loginokbutton\n"
"{\n"
"border-color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#loginokbutton:hover\n"
"{\n"
"color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#loginokbutton:pressed\n"
"{\n"
"color:blue;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"border:transparent;\n"
"}"));

        horizontalLayout_3->addWidget(loginokbutton);

        logincancelbutton = new QPushButton(layoutWidget);
        logincancelbutton->setObjectName(QStringLiteral("logincancelbutton"));
        logincancelbutton->setFont(font);
        logincancelbutton->setStyleSheet(QString::fromUtf8("QPushButton#logincancelbutton\n"
"{\n"
"border-color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#logincancelbutton:hover\n"
"{\n"
"color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#logincancelbutton:pressed\n"
"{\n"
"color:blue;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"border:transparent;\n"
"}"));

        horizontalLayout_3->addWidget(logincancelbutton);

        layoutWidget1 = new QWidget(logindialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 90, 581, 161));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        accountlabel = new QLabel(layoutWidget1);
        accountlabel->setObjectName(QStringLiteral("accountlabel"));

        horizontalLayout->addWidget(accountlabel);

        accountline = new QLineEdit(layoutWidget1);
        accountline->setObjectName(QStringLiteral("accountline"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\220\245\347\217\200"));
        font1.setPointSize(20);
        accountline->setFont(font1);
        accountline->setStyleSheet(QLatin1String("background:transparent;color:white;\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px"));
        accountline->setEchoMode(QLineEdit::Normal);

        horizontalLayout->addWidget(accountline);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 10);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        passwordlabel = new QLabel(layoutWidget1);
        passwordlabel->setObjectName(QStringLiteral("passwordlabel"));

        horizontalLayout_2->addWidget(passwordlabel);

        passwordline = new QLineEdit(layoutWidget1);
        passwordline->setObjectName(QStringLiteral("passwordline"));
        passwordline->setFont(font1);
        passwordline->setStyleSheet(QLatin1String("background:transparent;color:white;\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px"));
        passwordline->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordline);

        horizontalLayout_2->setStretch(1, 10);

        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(logindialog);

        QMetaObject::connectSlotsByName(logindialog);
    } // setupUi

    void retranslateUi(QDialog *logindialog)
    {
        logindialog->setWindowTitle(QApplication::translate("logindialog", "\345\233\276\344\271\246\351\246\206\347\231\273\345\275\225", Q_NULLPTR));
        loginokbutton->setText(QApplication::translate("logindialog", "\347\241\256\350\256\244", Q_NULLPTR));
        logincancelbutton->setText(QApplication::translate("logindialog", "\345\217\226\346\266\210", Q_NULLPTR));
        accountlabel->setText(QApplication::translate("logindialog", "<html><head/><body><p><span style=\" font-size:20pt; color:#00aaff;\">\350\264\246\345\217\267\357\274\232</span></p></body></html>", Q_NULLPTR));
        passwordlabel->setText(QApplication::translate("logindialog", "<html><head/><body><p><span style=\" font-size:20pt; color:#00aaff;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class logindialog: public Ui_logindialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
