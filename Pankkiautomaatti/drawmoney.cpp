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

    connect(objRestApi, SIGNAL(withdrawalReady()),                //clientID --- login->>mainwindow
            this, SLOT(receiveWithdrawalReady()));

    connect(objRestApi, SIGNAL(balanceSignal(QString)),
            this, SLOT(receiveBalance(QString)));

    connect(objRestApi, SIGNAL(nameToExe(QString)),
            this, SLOT(receiveClientName(QString)));

    qDebug()<< "DrawMoney muodostin: id+balance"<< clientID <<" + " << balance;



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

void DrawMoney::on_btn_Draw20_clicked()
{
    drawAmount = "20";
}


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
    objRestApi->getBalance(clientID); // pitää painaa alussa 2 kertaa // ei tarvii jos ikkunan auetessa saadaan balance näkyviin
    qDebug()<< "draw (ID, amount)"<< clientID << ":" << drawAmount;

    double num1 = drawAmount.toDouble();
    double num2 = balance.toDouble();

    if(num1 > num2)
    {
        qDebug()<< "IFFI ei tarpeeksi rahaa: draw>bal"<< num1<<">"<<num2;
    }
    else {
        objRestApi->withdrawal(clientID, drawAmount);
        //this->close;
    }

}

