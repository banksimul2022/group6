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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *AccActions;
    QPushButton *prevAction;
    QPushButton *nextAction;
    QPushButton *draw;
    QPushButton *close;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *accbalance;
    QLabel *balanceLabel;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *owner;
    QTextEdit *textEdit;
    QPushButton *BTN_pincode;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1017, 764);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(100, 350, 160, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        AccActions = new QPushButton(verticalLayoutWidget);
        AccActions->setObjectName(QString::fromUtf8("AccActions"));

        verticalLayout->addWidget(AccActions);

        prevAction = new QPushButton(verticalLayoutWidget);
        prevAction->setObjectName(QString::fromUtf8("prevAction"));

        verticalLayout->addWidget(prevAction);

        nextAction = new QPushButton(verticalLayoutWidget);
        nextAction->setObjectName(QString::fromUtf8("nextAction"));

        verticalLayout->addWidget(nextAction);

        draw = new QPushButton(verticalLayoutWidget);
        draw->setObjectName(QString::fromUtf8("draw"));

        verticalLayout->addWidget(draw);

        close = new QPushButton(verticalLayoutWidget);
        close->setObjectName(QString::fromUtf8("close"));

        verticalLayout->addWidget(close);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(100, 250, 160, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        accbalance = new QPushButton(verticalLayoutWidget_2);
        accbalance->setObjectName(QString::fromUtf8("accbalance"));

        verticalLayout_2->addWidget(accbalance);

        balanceLabel = new QLabel(verticalLayoutWidget_2);
        balanceLabel->setObjectName(QString::fromUtf8("balanceLabel"));

        verticalLayout_2->addWidget(balanceLabel);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 199, 223, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        owner = new QLabel(horizontalLayoutWidget);
        owner->setObjectName(QString::fromUtf8("owner"));

        horizontalLayout->addWidget(owner);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(320, 200, 431, 331));
        QFont font;
        font.setPointSize(14);
        textEdit->setFont(font);
        BTN_pincode = new QPushButton(centralwidget);
        BTN_pincode->setObjectName(QString::fromUtf8("BTN_pincode"));
        BTN_pincode->setGeometry(QRect(120, 560, 80, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1017, 25));
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
        AccActions->setText(QCoreApplication::translate("MainWindow", "Account actions", nullptr));
        prevAction->setText(QCoreApplication::translate("MainWindow", "Prev 10 actions", nullptr));
        nextAction->setText(QCoreApplication::translate("MainWindow", "Next 10 actions", nullptr));
        draw->setText(QCoreApplication::translate("MainWindow", "Draw money", nullptr));
        close->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        accbalance->setText(QCoreApplication::translate("MainWindow", "Account Balance", nullptr));
        balanceLabel->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Account Owner:", nullptr));
        owner->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        BTN_pincode->setText(QCoreApplication::translate("MainWindow", "Pinkoodi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
