/********************************************************************************
** Form generated from reading UI file 'customamount.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMAMOUNT_H
#define UI_CUSTOMAMOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_customamount
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *BTN_draw;

    void setupUi(QDialog *customamount)
    {
        if (customamount->objectName().isEmpty())
            customamount->setObjectName(QString::fromUtf8("customamount"));
        customamount->resize(376, 304);
        lineEdit = new QLineEdit(customamount);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 110, 113, 24));
        label = new QLabel(customamount);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 80, 81, 20));
        BTN_draw = new QPushButton(customamount);
        BTN_draw->setObjectName(QString::fromUtf8("BTN_draw"));
        BTN_draw->setGeometry(QRect(130, 150, 80, 25));

        retranslateUi(customamount);

        QMetaObject::connectSlotsByName(customamount);
    } // setupUi

    void retranslateUi(QDialog *customamount)
    {
        customamount->setWindowTitle(QCoreApplication::translate("customamount", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("customamount", "Anna summa", nullptr));
        BTN_draw->setText(QCoreApplication::translate("customamount", "Draw", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customamount: public Ui_customamount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMAMOUNT_H
