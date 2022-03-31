#include "drawmoney.h"
#include "ui_drawmoney.h"

drawMoney::drawMoney(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::drawMoney)
{
    ui->setupUi(this);
    pcustomamount = new customamount;
}

drawMoney::~drawMoney()
{
    delete ui;
}

void drawMoney::on_BTN_close_clicked()
{
    this->close();
}


void drawMoney::on_BTN_draw_clicked()
{

    doublestrAmount = stringAmount.toDouble();
    if(balance < doublestrAmount)
    {
        ui->lineEdit->setText("Vitun köyhä :D");
    }
    else
    {
        balance = balance - doublestrAmount;
        QString strbalance = QString::number(balance);
        QString balanceDraw = "Balance: ";
        balanceDraw.append(strbalance);
        ui->lineEdit_2->setText(balanceDraw);
        ui->lineEdit->setText(strbalance);
    }
}



void drawMoney::on_BTN_muu_clicked()
{
    pcustomamount->show();
    //ui->lineEdit->setText("Anna summa:");
    //doublestrAmount = stringAmount.toDouble();
    //stringAmount = ui->lineEdit_3->text();
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

