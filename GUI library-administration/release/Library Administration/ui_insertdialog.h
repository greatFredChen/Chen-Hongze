/********************************************************************************
** Form generated from reading UI file 'insertdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTDIALOG_H
#define UI_INSERTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_insertdialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *insertdialog)
    {
        if (insertdialog->objectName().isEmpty())
            insertdialog->setObjectName(QStringLiteral("insertdialog"));
        insertdialog->resize(885, 485);
        insertdialog->setStyleSheet(QString::fromUtf8("#insertdialog{border-image: url(:/\346\226\260\345\211\215\347\274\200/cb8065380cd79123b53fe4beae345982b3b78018.jpg);}"));
        verticalLayout_2 = new QVBoxLayout(insertdialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(insertdialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        textEdit = new QTextEdit(insertdialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(16);
        textEdit->setFont(font);
        textEdit->setStyleSheet(QLatin1String("background:transparent;color:white;\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(insertdialog);
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

        pushButton_2 = new QPushButton(insertdialog);
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

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 6);
        verticalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(insertdialog);

        QMetaObject::connectSlotsByName(insertdialog);
    } // setupUi

    void retranslateUi(QDialog *insertdialog)
    {
        insertdialog->setWindowTitle(QApplication::translate("insertdialog", "\346\217\222\345\205\245", Q_NULLPTR));
        label->setText(QApplication::translate("insertdialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; color:#e85b1a;\">\345\272\217\345\217\267\345\217\212\344\271\246\345\220\215</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("insertdialog", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("insertdialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class insertdialog: public Ui_insertdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTDIALOG_H
