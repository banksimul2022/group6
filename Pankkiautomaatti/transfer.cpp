#include "transfer.h"
#include "ui_transfer.h"

transfer::transfer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::transfer)
{
    ui->setupUi(this);

    objRestApi = new DLLRestApi;
    timer = new QTimer;
    timerWarning = new QTimer;

    connect(objRestApi, SIGNAL(transferReady()),
            this, SLOT(receiveTransferReady()));

    connect(timer, SIGNAL(timeout()),
            this, SLOT(transferIdleSlot()));

    connect(timerWarning, SIGNAL(timeout()),
            this, SLOT(clearWarning()));

    connect(ui->btn_transfer, SIGNAL(clicked()),
            this, SLOT(startTransferTimer()));


    setWindowFlag(Qt::WindowStaysOnTopHint);
    setWindowModality(Qt::ApplicationModal);
}

transfer::~transfer()
{
    delete ui;

    delete timer;
    timer = nullptr;

    delete timerWarning;
    timerWarning = nullptr;

    delete objRestApi;
    objRestApi = nullptr;
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

void transfer::recvBalance(QString bal)
{
    balance = bal;
}

void transfer::clearWarning()
{
    ui->label_warning_transfer->setText("");
}

void transfer::recvCardMode(bool mode)
{
    credit = mode;
    if(credit == true)
    {
        ui->label_cardMode->setText("     CREDIT");
    }
    else{
        ui->label_cardMode->setText("     DEBIT");
    }
}

void transfer::on_btn_transfer_clicked()
{
    objRestApi->getBalance(accID);
    recvAccNumber = ui->le_recvAccID->text();
    transferAmount = ui->le_transferAmount->text();

    if(transferAmount.toDouble() > balance.toDouble())
    {
        if(credit == true)
        {
            objRestApi->transfer(accID, recvAccNumber, transferAmount);
            this->clearWarning();
            this->close();
        }
        else {
            ui->label_warning_transfer->setText("Account balance too low\n" "Balance: "+balance+"€\n"+"Transfer Amount: "+transferAmount+"€");
            timerWarning->start(10000);
        }
    }
    else {
        objRestApi->transfer(accID, recvAccNumber, transferAmount);
        this->clearWarning();
        this->close();
    }
}
