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

    void setupUi(QDialog *transfer)
    {
        if (transfer->objectName().isEmpty())
            transfer->setObjectName(QString::fromUtf8("transfer"));
        transfer->resize(400, 367);
        btn_transfer = new QPushButton(transfer);
        btn_transfer->setObjectName(QString::fromUtf8("btn_transfer"));
        btn_transfer->setGeometry(QRect(130, 240, 81, 51));
        le_recvAccID = new QLineEdit(transfer);
        le_recvAccID->setObjectName(QString::fromUtf8("le_recvAccID"));
        le_recvAccID->setGeometry(QRect(80, 60, 201, 31));
        label = new QLabel(transfer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 0, 351, 71));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(transfer);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 100, 141, 71));
        label_2->setFont(font);
        le_transferAmount = new QLineEdit(transfer);
        le_transferAmount->setObjectName(QString::fromUtf8("le_transferAmount"));
        le_transferAmount->setGeometry(QRect(110, 160, 131, 61));

        retranslateUi(transfer);

        QMetaObject::connectSlotsByName(transfer);
    } // setupUi

    void retranslateUi(QDialog *transfer)
    {
        transfer->setWindowTitle(QCoreApplication::translate("transfer", "ATM-TRANSFER", nullptr));
        btn_transfer->setText(QCoreApplication::translate("transfer", "transfer", nullptr));
        label->setText(QCoreApplication::translate("transfer", "ENTER receiver id_bank_account", nullptr));
        label_2->setText(QCoreApplication::translate("transfer", "Transfer amount", nullptr));
    } // retranslateUi

};

namespace Ui {
    class transfer: public Ui_transfer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFER_H
