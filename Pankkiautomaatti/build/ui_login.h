/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label;
    QLineEdit *le_RFID;
    QPushButton *btn_showPINui;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(400, 300);
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 70, 251, 121));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        le_RFID = new QLineEdit(login);
        le_RFID->setObjectName(QString::fromUtf8("le_RFID"));
        le_RFID->setGeometry(QRect(110, 190, 113, 22));
        btn_showPINui = new QPushButton(login);
        btn_showPINui->setObjectName(QString::fromUtf8("btn_showPINui"));
        btn_showPINui->setGeometry(QRect(10, 270, 131, 24));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("login", "Sy\303\266t\303\244 kortti lukijaan", nullptr));
        btn_showPINui->setText(QCoreApplication::translate("login", "open pincode-UI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
