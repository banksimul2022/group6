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
    QPushButton *btn_prev10actions;
    QPushButton *btn_next10actions;
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
        btn_balance->setGeometry(QRect(10, 80, 111, 31));
        btn_drawMoney = new QPushButton(centralwidget);
        btn_drawMoney->setObjectName(QString::fromUtf8("btn_drawMoney"));
        btn_drawMoney->setGeometry(QRect(10, 150, 101, 41));
        le_actions = new QTextEdit(centralwidget);
        le_actions->setObjectName(QString::fromUtf8("le_actions"));
        le_actions->setGeometry(QRect(190, 120, 431, 291));
        QFont font;
        font.setPointSize(14);
        le_actions->setFont(font);
        le_balance = new QLineEdit(centralwidget);
        le_balance->setObjectName(QString::fromUtf8("le_balance"));
        le_balance->setGeometry(QRect(132, 81, 151, 31));
        btn_logOut = new QPushButton(centralwidget);
        btn_logOut->setObjectName(QString::fromUtf8("btn_logOut"));
        btn_logOut->setGeometry(QRect(10, 320, 101, 41));
        btn_10actions = new QPushButton(centralwidget);
        btn_10actions->setObjectName(QString::fromUtf8("btn_10actions"));
        btn_10actions->setGeometry(QRect(10, 210, 101, 41));
        btn_prev10actions = new QPushButton(centralwidget);
        btn_prev10actions->setObjectName(QString::fromUtf8("btn_prev10actions"));
        btn_prev10actions->setGeometry(QRect(330, 30, 161, 61));
        btn_next10actions = new QPushButton(centralwidget);
        btn_next10actions->setObjectName(QString::fromUtf8("btn_next10actions"));
        btn_next10actions->setGeometry(QRect(510, 30, 161, 61));
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_balance->setText(QCoreApplication::translate("MainWindow", "Show balance", nullptr));
        btn_drawMoney->setText(QCoreApplication::translate("MainWindow", "Draw Money", nullptr));
        btn_logOut->setText(QCoreApplication::translate("MainWindow", "Log out", nullptr));
        btn_10actions->setText(QCoreApplication::translate("MainWindow", "Show actions", nullptr));
        btn_prev10actions->setText(QCoreApplication::translate("MainWindow", "prev 10 actions", nullptr));
        btn_next10actions->setText(QCoreApplication::translate("MainWindow", "next 10 actions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
