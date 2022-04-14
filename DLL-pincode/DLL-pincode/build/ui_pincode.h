/********************************************************************************
** Form generated from reading UI file 'pincode.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINCODE_H
#define UI_PINCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pincode
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *BTN_1;
    QPushButton *BTN_2;
    QPushButton *BTN_3;
    QPushButton *BTN_4;
    QPushButton *BTN_5;
    QPushButton *BTN_6;
    QPushButton *BTN_7;
    QPushButton *BTN_8;
    QPushButton *BTN_9;
    QPushButton *BTN_0;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BTN_clear;
    QPushButton *BTN_ok;
    QLineEdit *le_Pincode;
    QPushButton *btn_cancel;

    void setupUi(QDialog *Pincode)
    {
        if (Pincode->objectName().isEmpty())
            Pincode->setObjectName(QString::fromUtf8("Pincode"));
        Pincode->resize(353, 556);
        gridLayoutWidget = new QWidget(Pincode);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 90, 241, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        BTN_1 = new QPushButton(gridLayoutWidget);
        BTN_1->setObjectName(QString::fromUtf8("BTN_1"));

        gridLayout->addWidget(BTN_1, 0, 0, 1, 1);

        BTN_2 = new QPushButton(gridLayoutWidget);
        BTN_2->setObjectName(QString::fromUtf8("BTN_2"));

        gridLayout->addWidget(BTN_2, 0, 1, 1, 1);

        BTN_3 = new QPushButton(gridLayoutWidget);
        BTN_3->setObjectName(QString::fromUtf8("BTN_3"));

        gridLayout->addWidget(BTN_3, 0, 2, 1, 1);

        BTN_4 = new QPushButton(gridLayoutWidget);
        BTN_4->setObjectName(QString::fromUtf8("BTN_4"));

        gridLayout->addWidget(BTN_4, 1, 0, 1, 1);

        BTN_5 = new QPushButton(gridLayoutWidget);
        BTN_5->setObjectName(QString::fromUtf8("BTN_5"));

        gridLayout->addWidget(BTN_5, 1, 1, 1, 1);

        BTN_6 = new QPushButton(gridLayoutWidget);
        BTN_6->setObjectName(QString::fromUtf8("BTN_6"));

        gridLayout->addWidget(BTN_6, 1, 2, 1, 1);

        BTN_7 = new QPushButton(gridLayoutWidget);
        BTN_7->setObjectName(QString::fromUtf8("BTN_7"));

        gridLayout->addWidget(BTN_7, 2, 0, 1, 1);

        BTN_8 = new QPushButton(gridLayoutWidget);
        BTN_8->setObjectName(QString::fromUtf8("BTN_8"));

        gridLayout->addWidget(BTN_8, 2, 1, 1, 1);

        BTN_9 = new QPushButton(gridLayoutWidget);
        BTN_9->setObjectName(QString::fromUtf8("BTN_9"));

        gridLayout->addWidget(BTN_9, 2, 2, 1, 1);

        BTN_0 = new QPushButton(gridLayoutWidget);
        BTN_0->setObjectName(QString::fromUtf8("BTN_0"));

        gridLayout->addWidget(BTN_0, 4, 1, 1, 1);

        horizontalLayoutWidget = new QWidget(Pincode);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 260, 241, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BTN_clear = new QPushButton(horizontalLayoutWidget);
        BTN_clear->setObjectName(QString::fromUtf8("BTN_clear"));

        horizontalLayout->addWidget(BTN_clear);

        BTN_ok = new QPushButton(horizontalLayoutWidget);
        BTN_ok->setObjectName(QString::fromUtf8("BTN_ok"));

        horizontalLayout->addWidget(BTN_ok);

        le_Pincode = new QLineEdit(Pincode);
        le_Pincode->setObjectName(QString::fromUtf8("le_Pincode"));
        le_Pincode->setGeometry(QRect(50, 30, 241, 61));
        QFont font;
        font.setPointSize(14);
        le_Pincode->setFont(font);
        le_Pincode->setCursor(QCursor(Qt::IBeamCursor));
        le_Pincode->setLayoutDirection(Qt::LeftToRight);
        le_Pincode->setAutoFillBackground(false);
        btn_cancel = new QPushButton(Pincode);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setGeometry(QRect(110, 360, 116, 24));

        retranslateUi(Pincode);

        QMetaObject::connectSlotsByName(Pincode);
    } // setupUi

    void retranslateUi(QDialog *Pincode)
    {
        Pincode->setWindowTitle(QCoreApplication::translate("Pincode", "Dialog", nullptr));
        BTN_1->setText(QCoreApplication::translate("Pincode", "1", nullptr));
        BTN_2->setText(QCoreApplication::translate("Pincode", "2", nullptr));
        BTN_3->setText(QCoreApplication::translate("Pincode", "3", nullptr));
        BTN_4->setText(QCoreApplication::translate("Pincode", "4", nullptr));
        BTN_5->setText(QCoreApplication::translate("Pincode", "5", nullptr));
        BTN_6->setText(QCoreApplication::translate("Pincode", "6", nullptr));
        BTN_7->setText(QCoreApplication::translate("Pincode", "7", nullptr));
        BTN_8->setText(QCoreApplication::translate("Pincode", "8", nullptr));
        BTN_9->setText(QCoreApplication::translate("Pincode", "9", nullptr));
        BTN_0->setText(QCoreApplication::translate("Pincode", "0", nullptr));
        BTN_clear->setText(QCoreApplication::translate("Pincode", "Clear", nullptr));
        BTN_ok->setText(QCoreApplication::translate("Pincode", "OK", nullptr));
        le_Pincode->setText(QCoreApplication::translate("Pincode", "         Sy\303\266t\303\244 PIN-koodi", nullptr));
        btn_cancel->setText(QCoreApplication::translate("Pincode", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pincode: public Ui_Pincode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINCODE_H
