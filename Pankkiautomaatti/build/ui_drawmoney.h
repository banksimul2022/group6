/********************************************************************************
** Form generated from reading UI file 'drawmoney.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAWMONEY_H
#define UI_DRAWMONEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DrawMoney
{
public:
    QPushButton *btn_Draw20;
    QPushButton *btn_Draw40;
    QPushButton *btn_Draw60;
    QPushButton *btn_Draw100;
    QPushButton *btn_Draw200;
    QPushButton *btn_Draw500;
    QPushButton *btn_customAmount;
    QPushButton *btn_Draw;
    QLineEdit *le_drawBalance;
    QPushButton *btn_debit;
    QPushButton *btn_credit;
    QLabel *label_warning;

    void setupUi(QDialog *DrawMoney)
    {
        if (DrawMoney->objectName().isEmpty())
            DrawMoney->setObjectName(QString::fromUtf8("DrawMoney"));
        DrawMoney->resize(400, 417);
        btn_Draw20 = new QPushButton(DrawMoney);
        btn_Draw20->setObjectName(QString::fromUtf8("btn_Draw20"));
        btn_Draw20->setGeometry(QRect(51, 150, 81, 51));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        btn_Draw20->setFont(font);
        btn_Draw40 = new QPushButton(DrawMoney);
        btn_Draw40->setObjectName(QString::fromUtf8("btn_Draw40"));
        btn_Draw40->setGeometry(QRect(141, 150, 81, 51));
        btn_Draw40->setFont(font);
        btn_Draw60 = new QPushButton(DrawMoney);
        btn_Draw60->setObjectName(QString::fromUtf8("btn_Draw60"));
        btn_Draw60->setGeometry(QRect(231, 150, 81, 51));
        btn_Draw60->setFont(font);
        btn_Draw100 = new QPushButton(DrawMoney);
        btn_Draw100->setObjectName(QString::fromUtf8("btn_Draw100"));
        btn_Draw100->setGeometry(QRect(51, 210, 81, 51));
        btn_Draw100->setFont(font);
        btn_Draw200 = new QPushButton(DrawMoney);
        btn_Draw200->setObjectName(QString::fromUtf8("btn_Draw200"));
        btn_Draw200->setGeometry(QRect(141, 210, 81, 51));
        btn_Draw200->setFont(font);
        btn_Draw500 = new QPushButton(DrawMoney);
        btn_Draw500->setObjectName(QString::fromUtf8("btn_Draw500"));
        btn_Draw500->setGeometry(QRect(231, 210, 81, 51));
        btn_Draw500->setFont(font);
        btn_customAmount = new QPushButton(DrawMoney);
        btn_customAmount->setObjectName(QString::fromUtf8("btn_customAmount"));
        btn_customAmount->setGeometry(QRect(50, 270, 261, 51));
        btn_customAmount->setFont(font);
        btn_Draw = new QPushButton(DrawMoney);
        btn_Draw->setObjectName(QString::fromUtf8("btn_Draw"));
        btn_Draw->setGeometry(QRect(51, 90, 81, 50));
        btn_Draw->setFont(font);
        le_drawBalance = new QLineEdit(DrawMoney);
        le_drawBalance->setObjectName(QString::fromUtf8("le_drawBalance"));
        le_drawBalance->setGeometry(QRect(140, 90, 171, 50));
        le_drawBalance->setFont(font);
        btn_debit = new QPushButton(DrawMoney);
        btn_debit->setObjectName(QString::fromUtf8("btn_debit"));
        btn_debit->setGeometry(QRect(150, 30, 81, 51));
        btn_debit->setFont(font);
        btn_credit = new QPushButton(DrawMoney);
        btn_credit->setObjectName(QString::fromUtf8("btn_credit"));
        btn_credit->setGeometry(QRect(230, 30, 81, 51));
        btn_credit->setFont(font);
        label_warning = new QLabel(DrawMoney);
        label_warning->setObjectName(QString::fromUtf8("label_warning"));
        label_warning->setGeometry(QRect(50, 325, 371, 71));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_warning->setFont(font1);

        retranslateUi(DrawMoney);

        QMetaObject::connectSlotsByName(DrawMoney);
    } // setupUi

    void retranslateUi(QDialog *DrawMoney)
    {
        DrawMoney->setWindowTitle(QCoreApplication::translate("DrawMoney", "ATM-DRAWMONEY", nullptr));
        btn_Draw20->setText(QCoreApplication::translate("DrawMoney", "20", nullptr));
        btn_Draw40->setText(QCoreApplication::translate("DrawMoney", "40", nullptr));
        btn_Draw60->setText(QCoreApplication::translate("DrawMoney", "60", nullptr));
        btn_Draw100->setText(QCoreApplication::translate("DrawMoney", "100", nullptr));
        btn_Draw200->setText(QCoreApplication::translate("DrawMoney", "200", nullptr));
        btn_Draw500->setText(QCoreApplication::translate("DrawMoney", "500", nullptr));
        btn_customAmount->setText(QCoreApplication::translate("DrawMoney", "Select custom amount", nullptr));
        btn_Draw->setText(QCoreApplication::translate("DrawMoney", "Draw", nullptr));
        btn_debit->setText(QCoreApplication::translate("DrawMoney", "DEBIT", nullptr));
        btn_credit->setText(QCoreApplication::translate("DrawMoney", "CREDIT", nullptr));
        label_warning->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DrawMoney: public Ui_DrawMoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWMONEY_H
