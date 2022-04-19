#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pdrawMoney = new drawMoney;

    objpincode = new DLLpincode;
    connect(pdrawMoney,SIGNAL(sendBalance(double)),
                this,SLOT(recvBalance(double)));
    OBJrestApi = new DLLRestApi;
    connect(OBJrestApi,SIGNAL(balanceToExe(QString)),
            this,SLOT(recvBalanceDLL(QString)));

    connect(OBJrestApi,SIGNAL(fiveActionsToExe(QString)),
            this,SLOT(RecvActions(QString)));
    connect(OBJrestApi,SIGNAL(nameToExe(QString)),
            this,SLOT(RecvName(QString)));
    OwnerID = "1";

    timer = new QTimer;

    connect(timer, SIGNAL(timeout()),
            this,SLOT(backToSignin()));

    connect(ui->nextAction,SIGNAL(clicked()),
            this, SLOT(buttonClicked()));

    connect(ui->accbalance,SIGNAL(clicked()),
            this, SLOT(buttonClicked()));

    connect(ui->AccActions,SIGNAL(clicked()),
            this, SLOT(buttonClicked()));

    connect(ui->prevAction,SIGNAL(clicked()),
            this, SLOT(buttonClicked()));

    connect(pdrawMoney, SIGNAL(startAajastin()),
            this, SLOT(aloitaTaika()));

    connect(this, SIGNAL(drawTimer()),
           pdrawMoney, SLOT(drawTimerSlot()));

    timer->start(1000);
}

MainWindow::~MainWindow()
{
    qDebug()<<"mainwindow tuhoaja";
    delete ui;

    delete pdrawMoney;
    pdrawMoney=nullptr;

    delete timer;
    timer=nullptr;

    delete objpincode;
    objpincode=nullptr;
}

void MainWindow::backToSignin()
{
    if(this->isActiveWindow()){
    aika++;
    qDebug()<<aika;
    if(aika==30)
    {
        this->close();
        timer->stop();
        aika=0;
    }
    }
    else
    {
        aika=0;
    }
}

void MainWindow::aloitaTaika()
{
    qDebug()<<"Main timer start";
    timer->start(1000);
}


void MainWindow::on_accbalance_clicked()
{
    OBJrestApi->getBalance(OwnerID);
    OBJrestApi->getAction(OwnerID);

}


void MainWindow::on_AccActions_clicked()
{
    OBJrestApi->getTenActions(OwnerID);
    OBJrestApi->getBalance(OwnerID);
}


void MainWindow::on_prevAction_clicked()
{

}


void MainWindow::on_nextAction_clicked()
{

}


void MainWindow::on_draw_clicked()
{
    timer->stop();
    pdrawMoney->show();
    aika=0;
    emit drawTimer();

}


void MainWindow::on_close_clicked()
{
    this->close();
}

void MainWindow::buttonClicked()
{
    timer->start(1000);
    aika=0;
}

void MainWindow::recvBalance(double b)
{
    Balance = b;
    qDebug() << b;
}

void MainWindow::recvBalanceDLL(QString bal)
{
   DLLbalance = bal;
   qDebug() << "main window" << DLLbalance;
   ui->balanceLabel->setText(DLLbalance);


}

void MainWindow::RecvActions(QString act)
{
    Actions = act;
    ui->textEdit->setText(Actions);
}

void MainWindow::RecvName(QString nam)
{
    Name = nam;
    ui->owner->setText(Name);
}



void MainWindow::on_BTN_pincode_clicked()
{
    objpincode->showPincodeUI();
}

