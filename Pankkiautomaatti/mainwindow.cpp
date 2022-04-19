#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objRestApi = new DLLRestApi;
    objDrawMoney = new DrawMoney(); //new DrawMoney(parent);
    objTransfer = new transfer;

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

    connect(this, SIGNAL(accountIDtoDrawMoney(QString)),
            objDrawMoney, SLOT(receiveAccountIDinDrawMoney(QString)));


    connect(objDrawMoney, SIGNAL(updateBalanceMainWindow()),
            this, SLOT(updateBalanceSlot()));

//transferReady
     connect(objTransfer, SIGNAL(updateMainBalance()),
            this, SLOT(updateBalanceSlot()));

    connect(objRestApi, SIGNAL(actionSignal(QString)),
            this, SLOT(receiveActions(QString)));

    connect(objRestApi, SIGNAL(browseActions(QString)),
            this, SLOT(receivePrev10(QString)));


    //transfer  signal
    connect(this, SIGNAL(accountIDtoTransfer(QString)),
            objTransfer, SLOT(receiveAccIDinTransfer(QString)));


    timer = new QTimer;

    connect(ui->btn_drawMoney, SIGNAL(clicked()),
            objDrawMoney, SLOT(startDrawMoneyTimer()));

    connect(timer, SIGNAL(timeout()),
            this, SLOT(mainIdleSlot()));

    connect(objDrawMoney, SIGNAL(mainTimerSignal()),
            this, SLOT(startMainTimer()));

    connect(ui->btn_balance, SIGNAL(clicked()),
            this, SLOT(startMainTimer()));

    connect(ui->btn_next10actions, SIGNAL(clicked()),
            this, SLOT(startMainTimer()));

    connect(ui->btn_prev10actions, SIGNAL(clicked()),
            this, SLOT(startMainTimer()));

    connect(ui->btn_10actions, SIGNAL(clicked()),
            this, SLOT(startMainTimer()));

    connect(ui->btn_Siirto, SIGNAL(clicked()),
            this, SLOT(startMainTimer()));

    connect(ui->btn_Siirto, SIGNAL(clicked()),
            objTransfer, SLOT(startTransferTimer()));

    connect(objTransfer, SIGNAL(mainTimerSig()), //käynnistää pääkäyttöliittymän ajastimen kun transfer sulkeutuu
            this, SLOT(startMainTimer()));


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

void MainWindow::receiveAccountIDfromLogin(QString id)
{
    accountID = id;
    qDebug() << "receiveAccountID in mainwindow" << accountID;

}

void MainWindow::startMainTimer()
{
    qDebug() << "startMainTimer 30sec";
    timer->start(30000);
}

void MainWindow::mainIdleSlot()
{
    qDebug() << "mainIdleSlot()";
    //this->close();

    if(this->isActiveWindow() == false)
    {
        qDebug()<< "mainIdleSlot() isActiveWindow() == false) restarting timer 10sec";
        timer->start(30000);
    }
    else {
        qDebug()<< "mainIdleSlot() close";
        qApp->quit();
        QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
    }
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
    emit accountIDtoDrawMoney(accountID);
}


void MainWindow::on_btn_logOut_clicked()
{
    qDebug() << "LOG OUT BUTTON";
    // EXE RESTART >
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}


void MainWindow::on_btn_10actions_clicked()
{
    qDebug() << "+++prev10 nappi++++";
    objRestApi->getTenActions(accountID);
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


void MainWindow::on_btn_Siirto_clicked()
{
    objTransfer->show();
    qDebug() << "emit acccountID from main:" << accountID;
    emit accountIDtoTransfer(accountID);
}

