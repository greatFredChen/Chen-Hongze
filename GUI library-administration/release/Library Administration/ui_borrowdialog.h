/********************************************************************************
** Form generated from reading UI file 'borrowdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWDIALOG_H
#define UI_BORROWDIALOG_H

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

class Ui_borrowdialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *borrowdialog)
    {
        if (borrowdialog->objectName().isEmpty())
            borrowdialog->setObjectName(QStringLiteral("borrowdialog"));
        borrowdialog->resize(590, 360);
        QIcon icon;
        icon.addFile(QStringLiteral(":/btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        borrowdialog->setWindowIcon(icon);
        borrowdialog->setStyleSheet(QString::fromUtf8("#borrowdialog{border-image: url(:/\346\226\260\345\211\215\347\274\200/cb8065380cd79123b53fe4beae345982b3b78018.jpg);}"));
        verticalLayout_2 = new QVBoxLayout(borrowdialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(borrowdialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(borrowdialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(18);
        lineEdit->setFont(font);
        lineEdit->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"background:transparent;color:white\n"
"\n"
""));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(borrowdialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(16);
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

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(borrowdialog);
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

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(borrowdialog);

        QMetaObject::connectSlotsByName(borrowdialog);
    } // setupUi

    void retranslateUi(QDialog *borrowdialog)
    {
        borrowdialog->setWindowTitle(QApplication::translate("borrowdialog", "\345\200\237\344\271\246", Q_NULLPTR));
        label->setText(QApplication::translate("borrowdialog", "<html><head/><body><p><span style=\" font-size:20pt; color:#55aa00;\">\344\271\246\345\220\215:</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("borrowdialog", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("borrowdialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class borrowdialog: public Ui_borrowdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWDIALOG_H
