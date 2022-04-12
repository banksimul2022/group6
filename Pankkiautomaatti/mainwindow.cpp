#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objRestApi = new DLLRestApi;
    objDrawMoney = new DrawMoney;

    connect(objRestApi, SIGNAL(balanceSignal(QString)),
            this, SLOT(receiveBalance(QString)));

    connect(objRestApi, SIGNAL(nameToExe(QString)),
            this, SLOT(receiveClientName(QString)));


    connect(objRestApi, SIGNAL(actionSignal(QString)),
            this, SLOT(receiveActions(QString)));

    connect(objRestApi, SIGNAL(actionSignal(QString)),
            this, SLOT(receiveActions(QString)));

    connect(this, SIGNAL(clientIDtoDrawMoney(QString)),
            objDrawMoney, SLOT(receiveClientIDinDrawMoney(QString)));

    connect(objDrawMoney, SIGNAL(updateBalanceMainWindow()),
            this, SLOT(updateBalanceSlot()));

    connect(objRestApi, SIGNAL(actionSignal(QString)),
            this, SLOT(receiveActions(QString)));

    connect(objRestApi, SIGNAL(browseActions(QString)),
            this, SLOT(receivePrev10(QString)));
}

MainWindow::~MainWindow()
{

    qDebug() << "~MainWindow() tuhoaja---------------------------";
    delete ui;
    objDrawMoney->close();


    delete objRestApi;
    objRestApi = nullptr;

    delete objDrawMoney;
    objDrawMoney = nullptr;
}

void MainWindow::receiveCLientIDfromLogin(QString id)
{
    clientID = id;
    qDebug() << "receiveCLientIDfromLogin()->main window is now open" << clientID;
}

void MainWindow::receiveActions(QString act)
{
    actions = act;
    ui->le_actions->setText(actions);
}

void MainWindow::receiveBalance(QString bal)
{
    balance = bal;
    qDebug() << "receiveBalance() in EXE" << balance;
}

void MainWindow::receiveClientName(QString name)
{
    clientName = name;
    ui->le_balance->setText(clientName+": "+balance+"€");
    qDebug() << "receiveClientName() in EXE" << name;
}

void MainWindow::updateBalanceSlot()
{
    qDebug() << "updateBalanceSlot() in EXE" << balance;
    objRestApi->getBalance(clientID);
    objRestApi->getAction(clientID);
}

void MainWindow::receivePrev10(QString prev10)
{
    if(prev10=="[]")
    {
       qDebug() << "tyhjä prev10";
    }
    actions = prev10;
    qDebug() << "receivePrev10Slot() in EXE";
    ui->le_actions->setText(actions);
}



void MainWindow::on_btn_balance_clicked()
{
    objRestApi->getBalance(clientID);
    objRestApi->getAction(clientID);
}


void MainWindow::on_btn_drawMoney_clicked()
{
    objDrawMoney->show();
    qDebug() << "sending clientID to DrawMoney FROM main" << clientID;
    objRestApi->getBalance(clientID);

    qDebug() << "sending balance to DrawMoney FROM main" << balance;
    emit clientIDtoDrawMoney(clientID);
}


void MainWindow::on_btn_logOut_clicked()
{
    qDebug() << "LOG OUT BUTTON";


    // EXE RESTART >
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());

    //delete ui;

    delete objRestApi;
    objRestApi = nullptr;
    emit logOutSignal();
    this->close();
}


void MainWindow::on_btn_10actions_clicked()
{
    qDebug() << "+++prev10 nappi++++";
    objRestApi->getTenActions(clientID);
    browseActions = 0;
}


void MainWindow::on_btn_prev10actions_clicked()
{
    browseActions += 10; //rajoitus DLL:ssä jos tyhjä arvo slotissa
    QString arvo = QString::number(browseActions);
    qDebug() << "prev arvo" << arvo;
    objRestApi->browseActions(arvo, clientID);
}


void MainWindow::on_btn_next10actions_clicked()
{
    browseActions -= 10;
    if(browseActions < 0)
    {
        browseActions = 0;
    }

    QString arvo = QString::number(browseActions);
    qDebug() << "next arvo" << arvo;
    objRestApi->browseActions(arvo, clientID);
}

