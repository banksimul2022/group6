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

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label;
    QLabel *logo;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(431, 212);
        login->setMinimumSize(QSize(431, 212));
        login->setMaximumSize(QSize(431, 212));
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 110, 241, 121));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        logo = new QLabel(login);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(50, 20, 331, 121));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "ATM-LOGIN", nullptr));
        label->setText(QCoreApplication::translate("login", "Sy\303\266t\303\244 kortti lukijaan", nullptr));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
