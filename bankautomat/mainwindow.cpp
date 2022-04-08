#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pdrawMoney = new drawMoney;
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
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pdrawMoney;
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
    pdrawMoney->show();

}


void MainWindow::on_close_clicked()
{
    this->close();
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


