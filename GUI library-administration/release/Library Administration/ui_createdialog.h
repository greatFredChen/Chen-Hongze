/********************************************************************************
** Form generated from reading UI file 'createdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEDIALOG_H
#define UI_CREATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_createdialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *numberline;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *nameline;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *createdialog)
    {
        if (createdialog->objectName().isEmpty())
            createdialog->setObjectName(QStringLiteral("createdialog"));
        createdialog->resize(719, 394);
        createdialog->setStyleSheet(QString::fromUtf8("#createdialog{border-image: url(:/\346\226\260\345\211\215\347\274\200/\347\237\263\345\244\264\351\227\2503.jpg);}"));
        verticalLayout_2 = new QVBoxLayout(createdialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(createdialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        numberline = new QLineEdit(createdialog);
        numberline->setObjectName(QStringLiteral("numberline"));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(16);
        numberline->setFont(font);
        numberline->setStyleSheet(QLatin1String("background:transparent;color:black;\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px"));

        horizontalLayout->addWidget(numberline);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(createdialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        nameline = new QLineEdit(createdialog);
        nameline->setObjectName(QStringLiteral("nameline"));
        nameline->setFont(font);
        nameline->setStyleSheet(QLatin1String("background:transparent;color:black;\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px"));

        horizontalLayout_2->addWidget(nameline);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton = new QPushButton(createdialog);
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

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(createdialog);
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


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(createdialog);

        QMetaObject::connectSlotsByName(createdialog);
    } // setupUi

    void retranslateUi(QDialog *createdialog)
    {
        createdialog->setWindowTitle(QApplication::translate("createdialog", "\345\210\233\345\273\272", Q_NULLPTR));
        label->setText(QApplication::translate("createdialog", "<html><head/><body><p><span style=\" font-size:20pt; color:#aaff7f;\">\344\271\246\347\232\204\345\272\217\345\217\267</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("createdialog", "<html><head/><body><p><span style=\" font-size:20pt; color:#ff0000;\">\344\271\246\347\232\204\345\220\215\345\255\227</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("createdialog", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("createdialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class createdialog: public Ui_createdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEDIALOG_H
