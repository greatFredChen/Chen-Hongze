/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

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
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_registerdialog
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *accountlabel;
    QLineEdit *accountline;
    QHBoxLayout *horizontalLayout_2;
    QLabel *accountlabel_2;
    QLineEdit *passwordline;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *registerdialog)
    {
        if (registerdialog->objectName().isEmpty())
            registerdialog->setObjectName(QStringLiteral("registerdialog"));
        registerdialog->resize(819, 426);
        QIcon icon;
        icon.addFile(QStringLiteral(":/btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        registerdialog->setWindowIcon(icon);
        registerdialog->setStyleSheet(QString::fromUtf8("#registerdialog{border-image: url(:/\346\226\260\345\211\215\347\274\200/cb8065380cd79123b53fe4beae345982b3b78018.jpg);}"));
        gridLayout_2 = new QGridLayout(registerdialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(registerdialog);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 40));

        gridLayout_2->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        accountlabel = new QLabel(registerdialog);
        accountlabel->setObjectName(QStringLiteral("accountlabel"));

        horizontalLayout->addWidget(accountlabel);

        accountline = new QLineEdit(registerdialog);
        accountline->setObjectName(QStringLiteral("accountline"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\220\245\347\217\200"));
        font.setPointSize(20);
        accountline->setFont(font);
        accountline->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"background:transparent;color:white;"));
        accountline->setEchoMode(QLineEdit::Normal);

        horizontalLayout->addWidget(accountline);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        accountlabel_2 = new QLabel(registerdialog);
        accountlabel_2->setObjectName(QStringLiteral("accountlabel_2"));

        horizontalLayout_2->addWidget(accountlabel_2);

        passwordline = new QLineEdit(registerdialog);
        passwordline->setObjectName(QStringLiteral("passwordline"));
        passwordline->setFont(font);
        passwordline->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"background:transparent;color:white;"));
        passwordline->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordline);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton = new QPushButton(registerdialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font1.setPointSize(20);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton\n"
"{\n"
"border-color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#pushButton:hover\n"
"{\n"
"color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#pushButton:pressed\n"
"{\n"
"color:blue;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"border:transparent;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(registerdialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2\n"
"{\n"
"border-color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#pushButton_2:hover\n"
"{\n"
"color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#pushButton_2:pressed\n"
"{\n"
"color:blue;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"border:transparent;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_2);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);


        retranslateUi(registerdialog);

        QMetaObject::connectSlotsByName(registerdialog);
    } // setupUi

    void retranslateUi(QDialog *registerdialog)
    {
        registerdialog->setWindowTitle(QApplication::translate("registerdialog", "\346\263\250\345\206\214", Q_NULLPTR));
        label->setText(QApplication::translate("registerdialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#00ff7f;\">\350\257\267\350\276\223\345\205\245\344\275\240\346\203\263\346\263\250\345\206\214\347\232\204\347\224\250\346\210\267\345\220\215\345\222\214\345\257\206\347\240\201</span></p><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
        accountlabel->setText(QApplication::translate("registerdialog", "<html><head/><body><p><span style=\" font-size:20pt; color:#00aaff;\">\350\264\246\346\210\267\357\274\232</span></p></body></html>", Q_NULLPTR));
        accountlabel_2->setText(QApplication::translate("registerdialog", "<html><head/><body><p><span style=\" font-size:20pt; color:#00aaff;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("registerdialog", "\346\263\250\345\206\214", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("registerdialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class registerdialog: public Ui_registerdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
