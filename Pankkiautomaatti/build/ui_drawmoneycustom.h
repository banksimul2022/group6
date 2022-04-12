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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DrawMoneyCustom
{
public:
    QLineEdit *le_customAmount;
    QPushButton *btn_confirmCustomAmount;

    void setupUi(QDialog *DrawMoneyCustom)
    {
        if (DrawMoneyCustom->objectName().isEmpty())
            DrawMoneyCustom->setObjectName(QString::fromUtf8("DrawMoneyCustom"));
        DrawMoneyCustom->resize(400, 300);
        le_customAmount = new QLineEdit(DrawMoneyCustom);
        le_customAmount->setObjectName(QString::fromUtf8("le_customAmount"));
        le_customAmount->setGeometry(QRect(80, 160, 113, 22));
        btn_confirmCustomAmount = new QPushButton(DrawMoneyCustom);
        btn_confirmCustomAmount->setObjectName(QString::fromUtf8("btn_confirmCustomAmount"));
        btn_confirmCustomAmount->setGeometry(QRect(90, 90, 81, 41));

        retranslateUi(DrawMoneyCustom);

        QMetaObject::connectSlotsByName(DrawMoneyCustom);
    } // setupUi

    void retranslateUi(QDialog *DrawMoneyCustom)
    {
        DrawMoneyCustom->setWindowTitle(QCoreApplication::translate("DrawMoneyCustom", "Dialog", nullptr));
        btn_confirmCustomAmount->setText(QCoreApplication::translate("DrawMoneyCustom", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DrawMoneyCustom: public Ui_DrawMoneyCustom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWMONEYCUSTOM_H
