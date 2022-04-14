#include "drawmoney.h"
#include "ui_drawmoney.h"


DrawMoney::DrawMoney(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DrawMoney)
{
    ui->setupUi(this);

    objDrawCustom = new DrawMoneyCustom;
    objRestApi = new DLLRestApi;


    connect(objDrawCustom,SIGNAL(customAmountSignal(QString)),
            this, SLOT(receiveCustomAmount(QString)));

    connect(objRestApi, SIGNAL(withdrawalReady()),
            this, SLOT(receiveWithdrawalReady()));

    connect(objRestApi, SIGNAL(balanceSignal(QString)),
            this, SLOT(receiveBalance(QString)));

    connect(objRestApi, SIGNAL(nameToExe(QString)),
            this, SLOT(receiveClientName(QString)));

    timer = new QTimer;


    connect(ui->btn_customAmount, SIGNAL(clicked()),
            objDrawCustom, SLOT(startCustomTimer()));

    connect(ui->btn_Draw, SIGNAL(clicked()),
            this, SLOT(startDrawMoneyTimer()));

    connect(ui->btn_Draw20, SIGNAL(clicked()),
            this, SLOT(startDrawMoneyTimer()));

    connect(ui->btn_Draw40, SIGNAL(clicked()),
            this, SLOT(startDrawMoneyTimer()));

    connect(ui->btn_Draw60, SIGNAL(clicked()),
            this, SLOT(startDrawMoneyTimer()));

    connect(ui->btn_Draw100, SIGNAL(clicked()),
            this, SLOT(startDrawMoneyTimer()));

    connect(ui->btn_Draw200, SIGNAL(clicked()),
            this, SLOT(startDrawMoneyTimer()));

    connect(ui->btn_Draw500, SIGNAL(clicked()),
            this, SLOT(startDrawMoneyTimer()));

    connect(ui->btn_debit, SIGNAL(clicked()),
            this, SLOT(startDrawMoneyTimer()));

    connect(ui->btn_credit, SIGNAL(clicked()),
            this, SLOT(startDrawMoneyTimer()));


    //timer napit

    connect(timer, SIGNAL(timeout()),
            this, SLOT(drawMoneyIdleSlot()));

    connect(objDrawCustom,SIGNAL(drawMoneyTimerSignal()),
            this, SLOT(startDrawMoneyTimer()));


    setWindowFlag(Qt::WindowStaysOnTopHint);
    setWindowModality(Qt::ApplicationModal);
}

DrawMoney::~DrawMoney()
{
    delete ui;

    delete objDrawCustom;
    objDrawCustom = nullptr;
}

void DrawMoney::receiveCustomAmount(QString custom)
{
    drawAmount = custom;
    qDebug()<< "receiveCustomAmount() in DrawMoney"<< drawAmount;
}

void DrawMoney::receiveClientIDinDrawMoney(QString id)
{
    clientID = id;
    qDebug()<< "receiveClientIDinDrawMoney"<< clientID;
    objRestApi->getBalance(clientID);
    ui->le_drawBalance->setText(balance);
}

void DrawMoney::receiveWithdrawalReady()
{
    qDebug()<< "receiveWithdrawalReady in EXE";
    objRestApi->getBalance(clientID);
    emit updateBalanceMainWindow();
}

void DrawMoney::receiveBalance(QString bal)
{
    balance = bal;
    qDebug()<< "receiveBalance in drawmoney"<<clientName <<" " << balance;
}

void DrawMoney::receiveClientName(QString name)
{
    clientName = name;
    ui->le_drawBalance->setText(clientName+": "+balance+"€");
    qDebug()<< "receiveClientName in drawMoney" << clientName << "+"<< balance;
}

void DrawMoney::receiveAccountIDinDrawMoney(QString id)
{
    accountID = id;
    qDebug()<< "receiveAccountIDinDrawMoney id:" <<accountID;
}

void DrawMoney::startDrawMoneyTimer()
{
    qDebug()<< "startDrawMoneyTimer()";
    timer->start(10000);
}

void DrawMoney::drawMoneyIdleSlot()
{
    qDebug()<< "drawMoneyIdleSlot()";

    if(this->isActiveWindow() == false)
    {
        qDebug()<< "drawMoneyIdleSlot() isActiveWindow() == false) restarting timer 10sec";
        timer->start(10000);
    }
    else {
        qDebug()<< "drawMoneyIdleSlot() close";
        emit mainTimerSignal();
        this->close();
    }

}


void DrawMoney::on_btn_Draw20_clicked()
{
    drawAmount = "20"; 
};


void DrawMoney::on_btn_Draw40_clicked()
{
    drawAmount = "40";
}


void DrawMoney::on_btn_Draw60_clicked()
{
    drawAmount = "60";
}


void DrawMoney::on_btn_Draw100_clicked()
{
    drawAmount = "100";
}


void DrawMoney::on_btn_Draw200_clicked()
{
    drawAmount = "200";
}


void DrawMoney::on_btn_Draw500_clicked()
{
    drawAmount = "500";
}


void DrawMoney::on_btn_customAmount_clicked()
{
    objDrawCustom->show();

}


void DrawMoney::on_btn_Draw_clicked()
{
    objRestApi->getBalance(clientID);
    qDebug()<< "draw (acc_ID, client_ID, amount)"<< accountID << ":"<< clientID << ":"<< drawAmount;

    double num1 = drawAmount.toDouble();
    double num2 = balance.toDouble();

    if(num1 > num2)
    {
        qDebug()<< "IFFI ei tarpeeksi rahaa: draw>bal"<< num1<<">"<<num2;     
        if(credit == true)
        {
            qDebug()<< "credit nosto"<< num1<<">"<<num2;
            objRestApi->withdrawal(accountID, clientID, drawAmount);
        }
        else {            
            ui->label_warning->setText("Account balance too low\n" "Balance: "+balance+"€\n"+"Draw Amount: "+drawAmount+"€");
        }
    }
    else {
        objRestApi->withdrawal(accountID, clientID, drawAmount); //id_bank_account, id_client, drawAmount
        this->close();
    }

}


void DrawMoney::on_btn_debit_clicked()
{
    credit = false;
}


void DrawMoney::on_btn_credit_clicked()
{
    credit = true;
}

