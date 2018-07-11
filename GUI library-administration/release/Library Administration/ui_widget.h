/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *loginbutton;
    QPushButton *createbutton;
    QPushButton *insertbutton;
    QPushButton *printbutton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *savebutton;
    QPushButton *loadbutton;
    QPushButton *searchbutton;
    QPushButton *registerbutton;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_6;
    QPushButton *emptybutton;
    QPushButton *deletebutton;
    QPushButton *borrowbutton;
    QPushButton *returnbutton;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QLabel *label_14;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1099, 836);
        QIcon icon;
        icon.addFile(QStringLiteral(":/btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        Widget->setStyleSheet(QString::fromUtf8("#Widget{border-image: url(:/\346\226\260\345\211\215\347\274\200/cb8065380cd79123b53fe4beae345982b3b78018.jpg);}"));
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        loginbutton = new QPushButton(Widget);
        loginbutton->setObjectName(QStringLiteral("loginbutton"));
        loginbutton->setMinimumSize(QSize(140, 140));
        loginbutton->setMaximumSize(QSize(140, 140));
        loginbutton->setBaseSize(QSize(0, 0));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(60);
        loginbutton->setFont(font);
        loginbutton->setStyleSheet(QString::fromUtf8("QPushButton#loginbutton\n"
"{\n"
"border-image: url(:/\345\206\210\351\203\2501\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#loginbutton:hover\n"
"{\n"
" border-image:url(:/\345\206\210\351\203\2502\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#loginbutton:pressed\n"
"{\n"
" border-image:url(:/\345\206\210\351\203\2503\357\274\210PNG\357\274\211.png);\n"
"}\n"
""));

        gridLayout->addWidget(loginbutton, 0, 0, 1, 1);

        createbutton = new QPushButton(Widget);
        createbutton->setObjectName(QStringLiteral("createbutton"));
        createbutton->setMinimumSize(QSize(140, 140));
        createbutton->setMaximumSize(QSize(140, 140));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(70);
        createbutton->setFont(font1);
        createbutton->setStyleSheet(QString::fromUtf8("QPushButton#createbutton\n"
"{\n"
"border-image: url(:/\345\230\237\345\230\237\345\231\2342\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#createbutton:hover\n"
"{\n"
"border-image: url(:/\345\230\237\345\230\237\345\231\2343\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#createbutton:pressed\n"
"{\n"
"border-image: url(:/\345\230\237\345\230\237\345\231\2341\357\274\210PNG\357\274\211.png);\n"
"}"));

        gridLayout->addWidget(createbutton, 0, 1, 1, 1);

        insertbutton = new QPushButton(Widget);
        insertbutton->setObjectName(QStringLiteral("insertbutton"));
        insertbutton->setMinimumSize(QSize(140, 140));
        insertbutton->setMaximumSize(QSize(140, 140));
        insertbutton->setStyleSheet(QString::fromUtf8("QPushButton#insertbutton\n"
"{\n"
"border-image: url(:/\351\230\277\344\270\207\351\237\2631\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#insertbutton:hover\n"
"{\n"
"border-image: url(:/\351\230\277\344\270\207\351\237\2632\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#insertbutton:pressed\n"
"{\n"
"border-image: url(:/\351\230\277\344\270\207\351\237\2633\357\274\210PNG\357\274\211.png);\n"
"}"));

        gridLayout->addWidget(insertbutton, 0, 2, 1, 1);

        printbutton = new QPushButton(Widget);
        printbutton->setObjectName(QStringLiteral("printbutton"));
        printbutton->setMinimumSize(QSize(140, 140));
        printbutton->setMaximumSize(QSize(140, 140));
        printbutton->setStyleSheet(QString::fromUtf8("QPushButton#printbutton\n"
"{\n"
"border-image: url(:/\350\220\214\351\203\2011\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#printbutton:hover\n"
"{\n"
"border-image: url(:/\350\220\214\351\203\2012\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#printbutton:pressed\n"
"{\n"
"border-image: url(:/\350\220\214\351\203\2013\357\274\210PNG\357\274\211.png);\n"
"}"));

        gridLayout->addWidget(printbutton, 0, 3, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\220\245\347\217\200"));
        font2.setPointSize(16);
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);

        gridLayout->addWidget(label_5, 1, 3, 1, 1);

        savebutton = new QPushButton(Widget);
        savebutton->setObjectName(QStringLiteral("savebutton"));
        savebutton->setMinimumSize(QSize(140, 140));
        savebutton->setMaximumSize(QSize(140, 140));
        savebutton->setStyleSheet(QString::fromUtf8("QPushButton#savebutton\n"
"{\n"
"border-image: url(:/\350\217\262\350\216\211\344\270\2351\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#savebutton:hover\n"
"{\n"
"border-image: url(:/\350\217\262\350\216\211\344\270\2352\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#savebutton:pressed\n"
"{\n"
"border-image: url(:/\350\217\262\350\216\211\344\270\2353\357\274\210PNG\357\274\211.png);\n"
"}"));

        gridLayout->addWidget(savebutton, 2, 0, 1, 1);

        loadbutton = new QPushButton(Widget);
        loadbutton->setObjectName(QStringLiteral("loadbutton"));
        loadbutton->setMinimumSize(QSize(140, 140));
        loadbutton->setMaximumSize(QSize(140, 140));
        loadbutton->setStyleSheet(QString::fromUtf8("QPushButton#loadbutton\n"
"{\n"
"border-image: url(:/\347\234\237\345\270\2061\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#loadbutton:hover\n"
"{\n"
"border-image: url(:/\347\234\237\345\270\2062\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#loadbutton:pressed\n"
"{\n"
"border-image: url(:/\347\234\237\345\270\2063\357\274\210PNG\357\274\211.png);\n"
"}"));

        gridLayout->addWidget(loadbutton, 2, 1, 1, 1);

        searchbutton = new QPushButton(Widget);
        searchbutton->setObjectName(QStringLiteral("searchbutton"));
        searchbutton->setMinimumSize(QSize(140, 140));
        searchbutton->setMaximumSize(QSize(140, 140));
        searchbutton->setStyleSheet(QString::fromUtf8("QPushButton#searchbutton\n"
"{\n"
"border-image: url(:/\347\220\211\345\215\216\345\255\2201\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#searchbutton:hover\n"
"{\n"
"border-image: url(:/\347\220\211\345\215\216\345\255\2202\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#searchbutton:pressed\n"
"{\n"
"border-image: url(:/\347\220\211\345\215\216\345\255\2203\357\274\210PNG\357\274\211.png);\n"
"}"));

        gridLayout->addWidget(searchbutton, 2, 2, 1, 1);

        registerbutton = new QPushButton(Widget);
        registerbutton->setObjectName(QStringLiteral("registerbutton"));
        registerbutton->setMinimumSize(QSize(140, 140));
        registerbutton->setMaximumSize(QSize(140, 140));
        registerbutton->setStyleSheet(QString::fromUtf8("QPushButton#registerbutton\n"
"{\n"
"border-image: url(:/\345\260\217\345\212\250\347\211\2511\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#registerbutton:hover\n"
"{\n"
"border-image: url(:/\345\260\217\345\212\250\347\211\2512\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#registerbutton:pressed\n"
"{\n"
"border-image: url(:/\345\260\217\345\212\250\347\211\2513\357\274\210PNG\357\274\211.png);\n"
"}"));

        gridLayout->addWidget(registerbutton, 2, 3, 1, 1);

        label_9 = new QLabel(Widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font2);

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        label_8 = new QLabel(Widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font2);

        gridLayout->addWidget(label_8, 3, 1, 1, 1);

        label_7 = new QLabel(Widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font2);

        gridLayout->addWidget(label_7, 3, 2, 1, 1);

        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);

        gridLayout->addWidget(label_6, 3, 3, 1, 1);

        emptybutton = new QPushButton(Widget);
        emptybutton->setObjectName(QStringLiteral("emptybutton"));
        emptybutton->setMinimumSize(QSize(140, 140));
        emptybutton->setMaximumSize(QSize(140, 140));
        emptybutton->setStyleSheet(QString::fromUtf8("QPushButton#emptybutton\n"
"{\n"
"border-image: url(:/\346\211\223\345\267\245\346\210\230\345\243\2531\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#emptybutton:hover\n"
"{\n"
"border-image: url(:/\346\211\223\345\267\245\346\210\230\345\243\2532\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#emptybutton:pressed\n"
"{\n"
"border-image: url(:/\346\211\223\345\267\245\346\210\230\345\243\2533\357\274\210PNG\357\274\211.png);\n"
"}"));

        gridLayout->addWidget(emptybutton, 4, 0, 1, 1);

        deletebutton = new QPushButton(Widget);
        deletebutton->setObjectName(QStringLiteral("deletebutton"));
        deletebutton->setMinimumSize(QSize(140, 140));
        deletebutton->setMaximumSize(QSize(140, 140));
        deletebutton->setStyleSheet(QString::fromUtf8("QPushButton#deletebutton\n"
"{\n"
"	border-image: url(:/\345\212\251\346\211\2131\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#deletebutton:hover\n"
"{\n"
"border-image: url(:/\345\212\251\346\211\2132\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#deletebutton:pressed\n"
"{\n"
"border-image: url(:/\345\212\251\346\211\2133\357\274\210PNG\357\274\211.png);\n"
"}"));

        gridLayout->addWidget(deletebutton, 4, 1, 1, 1);

        borrowbutton = new QPushButton(Widget);
        borrowbutton->setObjectName(QStringLiteral("borrowbutton"));
        borrowbutton->setMinimumSize(QSize(140, 140));
        borrowbutton->setMaximumSize(QSize(140, 140));
        borrowbutton->setStyleSheet(QString::fromUtf8("QPushButton#borrowbutton\n"
"{\n"
"border-image: url(:/\347\257\2351\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#borrowbutton:hover\n"
"{\n"
"border-image: url(:/\347\257\2352\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#borrowbutton:pressed\n"
"{\n"
"border-image: url(:/\347\257\2353\357\274\210PNG\357\274\211.png);\n"
"}"));

        gridLayout->addWidget(borrowbutton, 4, 2, 1, 1);

        returnbutton = new QPushButton(Widget);
        returnbutton->setObjectName(QStringLiteral("returnbutton"));
        returnbutton->setMinimumSize(QSize(140, 140));
        returnbutton->setMaximumSize(QSize(140, 140));
        returnbutton->setStyleSheet(QString::fromUtf8("QPushButton#returnbutton\n"
"{\n"
"border-image: url(:/\346\241\266\345\255\2201\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#returnbutton:hover\n"
"{\n"
"border-image: url(:/\346\241\266\345\255\2202\357\274\210PNG\357\274\211.png);\n"
"}\n"
"QPushButton#returnbutton:pressed\n"
"{\n"
"border-image: url(:/\346\241\266\345\255\2203\357\274\210PNG\357\274\211.png);\n"
"}"));

        gridLayout->addWidget(returnbutton, 4, 3, 1, 1);

        label_10 = new QLabel(Widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font2);

        gridLayout->addWidget(label_10, 5, 0, 1, 1);

        label_11 = new QLabel(Widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font2);

        gridLayout->addWidget(label_11, 5, 1, 1, 1);

        label_12 = new QLabel(Widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font2);

        gridLayout->addWidget(label_12, 5, 2, 1, 1);

        label_13 = new QLabel(Widget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font2);

        gridLayout->addWidget(label_13, 5, 3, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setRowStretch(4, 1);
        gridLayout->setRowStretch(5, 1);
        gridLayout->setRowMinimumHeight(0, 1);
        gridLayout->setRowMinimumHeight(1, 1);
        gridLayout->setRowMinimumHeight(2, 1);
        gridLayout->setRowMinimumHeight(3, 1);
        gridLayout->setRowMinimumHeight(4, 1);
        gridLayout->setRowMinimumHeight(5, 1);

        gridLayout_2->addLayout(gridLayout, 5, 1, 2, 3);

        checkBox = new QCheckBox(Widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setMaximumSize(QSize(105, 30));
        checkBox->setFont(font2);
        checkBox->setStyleSheet(QString::fromUtf8("QCheckBox#checkBox\n"
"{\n"
"border-color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QCheckBox#checkBox:hover\n"
"{\n"
"color:white;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"}\n"
"QCheckBox#checkBox:pressed\n"
"{\n"
"color:blue;\n"
"border-image: url(:/\346\214\211\351\222\256.PNG);\n"
"border:transparent;\n"
"}"));

        gridLayout_2->addWidget(checkBox, 7, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 6, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 7, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 6, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 4, 2, 1, 1);

        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 100));
        label->setStyleSheet(QString::fromUtf8("border-image: \\*url();\n"
"font: 28pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
""));

        gridLayout_2->addWidget(label, 2, 2, 1, 1);

        label_14 = new QLabel(Widget);
        label_14->setObjectName(QStringLiteral("label_14"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\220\245\347\217\200"));
        label_14->setFont(font3);

        gridLayout_2->addWidget(label_14, 2, 3, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237\346\255\243\345\274\217\347\211\210ver.233", Q_NULLPTR));
        loginbutton->setText(QString());
        createbutton->setText(QString());
        insertbutton->setText(QString());
        printbutton->setText(QString());
        label_2->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#55ff00;\">\347\231\273\351\231\206/\347\231\273\345\207\272</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#55ff00;\">\345\210\233\345\273\272</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#55ff00;\">\346\217\222\345\205\245</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#55ff00;\">\346\211\223\345\215\260</span></p></body></html>", Q_NULLPTR));
        savebutton->setText(QString());
        loadbutton->setText(QString());
        searchbutton->setText(QString());
        registerbutton->setText(QString());
        label_9->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#55ff00;\">\344\277\235\345\255\230</span></p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#55ff00;\">\350\275\275\345\205\245</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#55ff00;\">\346\220\234\347\264\242</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#55ff00;\">\346\263\250\345\206\214</span></p></body></html>", Q_NULLPTR));
        emptybutton->setText(QString());
        deletebutton->setText(QString());
        borrowbutton->setText(QString());
        returnbutton->setText(QString());
        label_10->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#55ff00;\">\346\270\205\347\251\272</span></p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#55ff00;\">\345\210\240\351\231\244</span></p></body></html>", Q_NULLPTR));
        label_12->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#55ff00;\">\345\200\237\344\271\246</span></p></body></html>", Q_NULLPTR));
        label_13->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#55ff00;\">\350\277\230\344\271\246</span></p></body></html>", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Widget", "bgm", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" color:#00ff7f;\">\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237\346\255\243\345\274\217\347\211\210ver.233</span></p></body></html>", Q_NULLPTR));
        label_14->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#00ff00;\">by \347\254\254\344\270\200\345\260\217\347\273\204</span></p><p align=\"center\"><span style=\" font-size:12pt; color:#00ff00;\">(\345\205\266\345\256\236\346\230\257\346\210\221</span></p><p align=\"center\"><span style=\" font-size:12pt; color:#00ff00;\">\344\270\200\344\270\252\344\272\272\345\206\231\347\232\204.jpg)</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
