#include "drawmoney.h"
#include "ui_drawmoney.h"

drawMoney::drawMoney(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::drawMoney)
{
    ui->setupUi(this);
    pcustomamount = new customamount;
    connect(pcustomamount, SIGNAL(sendText(QString)),
            this,SLOT(recvValue(QString)));
    OBJJrestApi = new DLLRestApi;

    connect(OBJJrestApi,SIGNAL(balanceToExe(QString)),
            this,SLOT(recBalanceDLL(QString)));
    OwnerID = "1";
    OBJJrestApi->getBalance(OwnerID);
    ui->lineEdit_2->setText(DLLbalance);
}

drawMoney::~drawMoney()
{
    delete ui;
    delete pcustomamount;
}

void drawMoney::on_BTN_close_clicked()
{
    this->close();
}


void drawMoney::on_BTN_draw_clicked()
{
        OBJJrestApi->getBalance(OwnerID);


        if (DoubleDLLStringAmount > DoubleDLLBalance){

                ui->lineEdit_2->setText("Onko rahea");
        }
        else{
            ui->lineEdit_2->setText(DLLbalance);
            OBJJrestApi->withdrawal(OwnerID,stringAmount);
        }
}



void drawMoney::on_BTN_muu_clicked()
{
    pcustomamount->show();
}


void drawMoney::on_BTN_20_clicked()
{
    stringAmount = "20";
    ui->lineEdit->setText("Confirm amount: 20");


}


void drawMoney::on_BTN_40_clicked()
{
    stringAmount = "40";
    ui->lineEdit->setText("Confirm amount: 40");
}


void drawMoney::on_BTN_60_clicked()
{
    stringAmount = "60";
    ui->lineEdit->setText("Confirm amount: 60");
}


void drawMoney::on_BTN_100_clicked()
{
    stringAmount = "100";
    ui->lineEdit->setText("Confirm amount: 100");
}


void drawMoney::on_BTN_200_clicked()
{
    stringAmount = "200";
    ui->lineEdit->setText("Confirm amount: 200");
}


void drawMoney::on_BTN_500_clicked()
{
    stringAmount = "500";
    ui->lineEdit->setText("Confirm amount: 500");
}

void drawMoney::recvValue(QString t)
{
    stringAmount = t;
    OBJJrestApi->getBalance(OwnerID);

    if (DoubleDLLStringAmount > DoubleDLLBalance){

            ui->lineEdit_2->setText("Onko rahea");

    }
    else{
        ui->lineEdit_2->setText(DLLbalance);
        OBJJrestApi->withdrawal(OwnerID,stringAmount);
    }
}

void drawMoney::recBalanceDLL(QString Dllbal)
{
     DLLbalance = Dllbal;
     DoubleDLLBalance = DLLbalance.toDouble();
     DoubleDLLStringAmount = stringAmount.toDouble();
     if(ui->lineEdit_2->text() == "" && DLLbalance > 0)
     {
        ui->lineEdit_2->setText(DLLbalance);
        qDebug() << "Onko rahea" << DoubleDLLBalance;

     }
}



