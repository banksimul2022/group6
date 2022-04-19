#include "transfer.h"
#include "ui_transfer.h"

transfer::transfer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::transfer)
{
    ui->setupUi(this);

    objRestApi = new DLLRestApi;
    timer = new QTimer;

    connect(objRestApi, SIGNAL(transferReady()),
            this, SLOT(receiveTransferReady()));

    connect(timer, SIGNAL(timeout()),
            this, SLOT(transferIdleSlot()));

    setWindowFlag(Qt::WindowStaysOnTopHint);
    setWindowModality(Qt::ApplicationModal);


}

transfer::~transfer()
{
    delete ui;
}

void transfer::receiveAccIDinTransfer(QString id)
{
    accID = id;
    qDebug() << "receiveAccIDinTransfer()" << accID;
}

void transfer::receiveTransferReady()
{
    qDebug() << "receiveTransferReady()";
    emit updateMainBalance();
}

void transfer::startTransferTimer()
{
    qDebug() << "startTransferTimer()";
    timer->start(10000);
}

void transfer::transferIdleSlot()
{
    qDebug() << "transferIdleSlot()";
    emit mainTimerSig();
    this->close();
}

void transfer::on_btn_transfer_clicked()
{
    receiverAccID = ui->le_recvAccID->text();
    transferAmount = ui->le_transferAmount->text();
    qDebug() << "accID" << accID;
    qDebug() << "receiverAccID" << receiverAccID;
    qDebug() << "transferAmount" << transferAmount;


    objRestApi->transfer(accID, receiverAccID, transferAmount);

    this->close();
}

