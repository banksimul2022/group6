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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_drawMoney
{
public:
    QPushButton *BTN_close;
    QPushButton *BTN_draw;
    QPushButton *BTN_muu;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *BTN_20;
    QPushButton *BTN_40;
    QPushButton *BTN_60;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *BTN_100;
    QPushButton *BTN_200;
    QPushButton *BTN_500;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *drawMoney)
    {
        if (drawMoney->objectName().isEmpty())
            drawMoney->setObjectName(QString::fromUtf8("drawMoney"));
        drawMoney->resize(584, 519);
        BTN_close = new QPushButton(drawMoney);
        BTN_close->setObjectName(QString::fromUtf8("BTN_close"));
        BTN_close->setGeometry(QRect(50, 220, 80, 25));
        BTN_draw = new QPushButton(drawMoney);
        BTN_draw->setObjectName(QString::fromUtf8("BTN_draw"));
        BTN_draw->setGeometry(QRect(50, 280, 80, 25));
        BTN_muu = new QPushButton(drawMoney);
        BTN_muu->setObjectName(QString::fromUtf8("BTN_muu"));
        BTN_muu->setGeometry(QRect(50, 350, 80, 25));
        verticalLayoutWidget = new QWidget(drawMoney);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(140, 190, 160, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        BTN_20 = new QPushButton(verticalLayoutWidget);
        BTN_20->setObjectName(QString::fromUtf8("BTN_20"));

        verticalLayout->addWidget(BTN_20);

        BTN_40 = new QPushButton(verticalLayoutWidget);
        BTN_40->setObjectName(QString::fromUtf8("BTN_40"));

        verticalLayout->addWidget(BTN_40);

        BTN_60 = new QPushButton(verticalLayoutWidget);
        BTN_60->setObjectName(QString::fromUtf8("BTN_60"));

        verticalLayout->addWidget(BTN_60);

        verticalLayoutWidget_2 = new QWidget(drawMoney);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(310, 190, 160, 211));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        BTN_100 = new QPushButton(verticalLayoutWidget_2);
        BTN_100->setObjectName(QString::fromUtf8("BTN_100"));

        verticalLayout_2->addWidget(BTN_100);

        BTN_200 = new QPushButton(verticalLayoutWidget_2);
        BTN_200->setObjectName(QString::fromUtf8("BTN_200"));

        verticalLayout_2->addWidget(BTN_200);

        BTN_500 = new QPushButton(verticalLayoutWidget_2);
        BTN_500->setObjectName(QString::fromUtf8("BTN_500"));

        verticalLayout_2->addWidget(BTN_500);

        lineEdit = new QLineEdit(drawMoney);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 410, 241, 24));
        lineEdit_2 = new QLineEdit(drawMoney);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 150, 161, 24));

        retranslateUi(drawMoney);

        QMetaObject::connectSlotsByName(drawMoney);
    } // setupUi

    void retranslateUi(QDialog *drawMoney)
    {
        drawMoney->setWindowTitle(QCoreApplication::translate("drawMoney", "Dialog", nullptr));
        BTN_close->setText(QCoreApplication::translate("drawMoney", "Close", nullptr));
        BTN_draw->setText(QCoreApplication::translate("drawMoney", "Draw", nullptr));
        BTN_muu->setText(QCoreApplication::translate("drawMoney", "Muu", nullptr));
        BTN_20->setText(QCoreApplication::translate("drawMoney", "20", nullptr));
        BTN_40->setText(QCoreApplication::translate("drawMoney", "40", nullptr));
        BTN_60->setText(QCoreApplication::translate("drawMoney", "60", nullptr));
        BTN_100->setText(QCoreApplication::translate("drawMoney", "100", nullptr));
        BTN_200->setText(QCoreApplication::translate("drawMoney", "200", nullptr));
        BTN_500->setText(QCoreApplication::translate("drawMoney", "500", nullptr));
    } // retranslateUi

};

namespace Ui {
    class drawMoney: public Ui_drawMoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWMONEY_H
