/********************************************************************************
** Form generated from reading UI file 'transfer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFER_H
#define UI_TRANSFER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_transfer
{
public:
    QPushButton *btn_transfer;
    QLineEdit *le_recvAccID;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *le_transferAmount;
    QLabel *label_warning_transfer;
    QLabel *label_cardMode;

    void setupUi(QDialog *transfer)
    {
        if (transfer->objectName().isEmpty())
            transfer->setObjectName(QString::fromUtf8("transfer"));
        transfer->resize(400, 367);
        btn_transfer = new QPushButton(transfer);
        btn_transfer->setObjectName(QString::fromUtf8("btn_transfer"));
        btn_transfer->setGeometry(QRect(180, 210, 81, 51));
        le_recvAccID = new QLineEdit(transfer);
        le_recvAccID->setObjectName(QString::fromUtf8("le_recvAccID"));
        le_recvAccID->setGeometry(QRect(80, 60, 201, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        le_recvAccID->setFont(font);
        label = new QLabel(transfer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 0, 351, 71));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        label->setFont(font1);
        label_2 = new QLabel(transfer);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 100, 141, 41));
        label_2->setFont(font1);
        le_transferAmount = new QLineEdit(transfer);
        le_transferAmount->setObjectName(QString::fromUtf8("le_transferAmount"));
        le_transferAmount->setGeometry(QRect(90, 140, 171, 61));
        le_transferAmount->setFont(font);
        label_warning_transfer = new QLabel(transfer);
        label_warning_transfer->setObjectName(QString::fromUtf8("label_warning_transfer"));
        label_warning_transfer->setGeometry(QRect(60, 270, 271, 81));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        label_warning_transfer->setFont(font2);
        label_warning_transfer->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0)"));
        label_cardMode = new QLabel(transfer);
        label_cardMode->setObjectName(QString::fromUtf8("label_cardMode"));
        label_cardMode->setGeometry(QRect(90, 220, 81, 31));
        label_cardMode->setFont(font);
        label_cardMode->setStyleSheet(QString::fromUtf8("color:rgb(85, 0, 255);\n"
"background-color: rgb(255, 255, 255);"));

        retranslateUi(transfer);

        QMetaObject::connectSlotsByName(transfer);
    } // setupUi

    void retranslateUi(QDialog *transfer)
    {
        transfer->setWindowTitle(QCoreApplication::translate("transfer", "ATM-TRANSFER", nullptr));
        btn_transfer->setText(QCoreApplication::translate("transfer", "transfer", nullptr));
        label->setText(QCoreApplication::translate("transfer", "ENTER receiver account number", nullptr));
        label_2->setText(QCoreApplication::translate("transfer", "Transfer amount", nullptr));
        label_warning_transfer->setText(QString());
        label_cardMode->setText(QCoreApplication::translate("transfer", "    DEBIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class transfer: public Ui_transfer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFER_H
