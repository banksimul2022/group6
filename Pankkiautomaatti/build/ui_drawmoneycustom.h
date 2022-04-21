/********************************************************************************
** Form generated from reading UI file 'drawmoneycustom.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAWMONEYCUSTOM_H
#define UI_DRAWMONEYCUSTOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DrawMoneyCustom
{
public:
    QLineEdit *le_customAmount;
    QPushButton *btn_confirmCustomAmount;
    QLabel *label;

    void setupUi(QDialog *DrawMoneyCustom)
    {
        if (DrawMoneyCustom->objectName().isEmpty())
            DrawMoneyCustom->setObjectName(QString::fromUtf8("DrawMoneyCustom"));
        DrawMoneyCustom->resize(400, 300);
        le_customAmount = new QLineEdit(DrawMoneyCustom);
        le_customAmount->setObjectName(QString::fromUtf8("le_customAmount"));
        le_customAmount->setGeometry(QRect(120, 120, 131, 61));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        le_customAmount->setFont(font);
        btn_confirmCustomAmount = new QPushButton(DrawMoneyCustom);
        btn_confirmCustomAmount->setObjectName(QString::fromUtf8("btn_confirmCustomAmount"));
        btn_confirmCustomAmount->setGeometry(QRect(140, 200, 81, 41));
        label = new QLabel(DrawMoneyCustom);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 50, 151, 61));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);

        retranslateUi(DrawMoneyCustom);

        QMetaObject::connectSlotsByName(DrawMoneyCustom);
    } // setupUi

    void retranslateUi(QDialog *DrawMoneyCustom)
    {
        DrawMoneyCustom->setWindowTitle(QCoreApplication::translate("DrawMoneyCustom", "ATM-DRAWMONEY-CUSTOM", nullptr));
        le_customAmount->setText(QString());
        btn_confirmCustomAmount->setText(QCoreApplication::translate("DrawMoneyCustom", "OK", nullptr));
        label->setText(QCoreApplication::translate("DrawMoneyCustom", "Enter amount", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DrawMoneyCustom: public Ui_DrawMoneyCustom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWMONEYCUSTOM_H
