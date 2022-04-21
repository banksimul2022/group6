/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn_balance;
    QPushButton *btn_drawMoney;
    QTextEdit *le_actions;
    QLineEdit *le_balance;
    QPushButton *btn_logOut;
    QPushButton *btn_10actions;
    QPushButton *btn_Siirto;
    QPushButton *btn_next10actions;
    QPushButton *btn_prev10actions;
    QPushButton *btn_debit;
    QPushButton *btn_credit;
    QLabel *label_cardMode;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_balance = new QPushButton(centralwidget);
        btn_balance->setObjectName(QString::fromUtf8("btn_balance"));
        btn_balance->setGeometry(QRect(60, 90, 150, 50));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        btn_balance->setFont(font);
        btn_drawMoney = new QPushButton(centralwidget);
        btn_drawMoney->setObjectName(QString::fromUtf8("btn_drawMoney"));
        btn_drawMoney->setGeometry(QRect(60, 150, 150, 50));
        btn_drawMoney->setFont(font);
        le_actions = new QTextEdit(centralwidget);
        le_actions->setObjectName(QString::fromUtf8("le_actions"));
        le_actions->setGeometry(QRect(220, 150, 471, 241));
        QFont font1;
        font1.setPointSize(14);
        le_actions->setFont(font1);
        le_balance = new QLineEdit(centralwidget);
        le_balance->setObjectName(QString::fromUtf8("le_balance"));
        le_balance->setGeometry(QRect(220, 90, 150, 50));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        le_balance->setFont(font2);
        btn_logOut = new QPushButton(centralwidget);
        btn_logOut->setObjectName(QString::fromUtf8("btn_logOut"));
        btn_logOut->setGeometry(QRect(60, 330, 150, 50));
        btn_logOut->setFont(font);
        btn_10actions = new QPushButton(centralwidget);
        btn_10actions->setObjectName(QString::fromUtf8("btn_10actions"));
        btn_10actions->setGeometry(QRect(60, 210, 150, 50));
        btn_10actions->setFont(font);
        btn_Siirto = new QPushButton(centralwidget);
        btn_Siirto->setObjectName(QString::fromUtf8("btn_Siirto"));
        btn_Siirto->setGeometry(QRect(60, 270, 150, 50));
        btn_Siirto->setFont(font);
        btn_next10actions = new QPushButton(centralwidget);
        btn_next10actions->setObjectName(QString::fromUtf8("btn_next10actions"));
        btn_next10actions->setGeometry(QRect(540, 90, 150, 50));
        btn_next10actions->setFont(font);
        btn_prev10actions = new QPushButton(centralwidget);
        btn_prev10actions->setObjectName(QString::fromUtf8("btn_prev10actions"));
        btn_prev10actions->setEnabled(true);
        btn_prev10actions->setGeometry(QRect(380, 90, 150, 50));
        btn_prev10actions->setFont(font);
        btn_debit = new QPushButton(centralwidget);
        btn_debit->setObjectName(QString::fromUtf8("btn_debit"));
        btn_debit->setGeometry(QRect(210, 30, 75, 51));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        btn_debit->setFont(font3);
        btn_credit = new QPushButton(centralwidget);
        btn_credit->setObjectName(QString::fromUtf8("btn_credit"));
        btn_credit->setGeometry(QRect(300, 30, 75, 51));
        btn_credit->setFont(font3);
        label_cardMode = new QLabel(centralwidget);
        label_cardMode->setObjectName(QString::fromUtf8("label_cardMode"));
        label_cardMode->setGeometry(QRect(90, 40, 85, 30));
        label_cardMode->setFont(font);
        label_cardMode->setStyleSheet(QString::fromUtf8("color:rgb(85, 0, 255);\n"
"background-color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ATM-MAIN", nullptr));
        btn_balance->setText(QCoreApplication::translate("MainWindow", "Show balance", nullptr));
        btn_drawMoney->setText(QCoreApplication::translate("MainWindow", "Draw Money", nullptr));
        le_balance->setText(QString());
        btn_logOut->setText(QCoreApplication::translate("MainWindow", "Log out", nullptr));
        btn_10actions->setText(QCoreApplication::translate("MainWindow", "Show actions", nullptr));
        btn_Siirto->setText(QCoreApplication::translate("MainWindow", "Transfer", nullptr));
        btn_next10actions->setText(QCoreApplication::translate("MainWindow", "next 10 actions", nullptr));
        btn_prev10actions->setText(QCoreApplication::translate("MainWindow", "prev 10 actions", nullptr));
        btn_debit->setText(QCoreApplication::translate("MainWindow", "DEBIT", nullptr));
        btn_credit->setText(QCoreApplication::translate("MainWindow", "CREDIT", nullptr));
        label_cardMode->setText(QCoreApplication::translate("MainWindow", "     DEBIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
