/********************************************************************************
** Form generated from reading UI file 'deletedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEDIALOG_H
#define UI_DELETEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_deletedialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *textEdit;
    QListView *resultline;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *deletedialog)
    {
        if (deletedialog->objectName().isEmpty())
            deletedialog->setObjectName(QStringLiteral("deletedialog"));
        deletedialog->resize(919, 557);
        QIcon icon;
        icon.addFile(QStringLiteral(":/btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        deletedialog->setWindowIcon(icon);
        deletedialog->setStyleSheet(QString::fromUtf8("#deletedialog{border-image: url(:/\346\226\260\345\211\215\347\274\200/cb8065380cd79123b53fe4beae345982b3b78018.jpg);}"));
        verticalLayout_2 = new QVBoxLayout(deletedialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(deletedialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        label_3 = new QLabel(deletedialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        textEdit = new QTextEdit(deletedialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(16);
        textEdit->setFont(font);
        textEdit->setStyleSheet(QLatin1String("background:transparent;color:white;\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px"));

        horizontalLayout_3->addWidget(textEdit);

        resultline = new QListView(deletedialog);
        resultline->setObjectName(QStringLiteral("resultline"));
        resultline->setFont(font);
        resultline->setStyleSheet(QStringLiteral("background:transparent;color:white;border:2px groove gray;border-radius:10px;padding:2px 4px"));

        horizontalLayout_3->addWidget(resultline);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(deletedialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
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

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(deletedialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_3\n"
"{\n"
"border-color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#pushButton_3:hover\n"
"{\n"
"color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QPushButton#pushButton_3:pressed\n"
"{\n"
"color:blue;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"border:transparent;\n"
"}"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(deletedialog);
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

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);


        retranslateUi(deletedialog);

        QMetaObject::connectSlotsByName(deletedialog);
    } // setupUi

    void retranslateUi(QDialog *deletedialog)
    {
        deletedialog->setWindowTitle(QApplication::translate("deletedialog", "\345\210\240\351\231\244", Q_NULLPTR));
        label->setText(QApplication::translate("deletedialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; color:#e85b1a;\">\350\257\267\350\276\223\345\205\245\344\271\246\345\220\215</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("deletedialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; color:#ff0000;\">\345\210\240\351\231\244\347\273\223\346\236\234</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("deletedialog", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("deletedialog", "\346\270\205\347\251\272", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("deletedialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class deletedialog: public Ui_deletedialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEDIALOG_H
