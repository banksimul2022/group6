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

    timer = new QTimer(this);

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

    connect(ui->draw,SIGNAL(clicked()),
            this, SLOT(buttonClicked()));

    connect(pdrawMoney, SIGNAL(startAjastin()),
            this, SLOT(aloitaTaika()));

    timer->start(30000);
}

MainWindow::~MainWindow()
{
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
    this->close();
}

void MainWindow::aloitaTaika()
{
    timer->start(30000);
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

}


void MainWindow::on_close_clicked()
{
    this->close();
}

void MainWindow::buttonClicked()
{
    timer->start(30000);
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

