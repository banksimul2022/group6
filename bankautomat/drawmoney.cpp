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

    connect(this, SIGNAL(startTimer()),
            pcustomamount, SLOT(ajastin()));

    connect(pcustomamount, SIGNAL(startAjastin()),
            this, SLOT(aloitaAika()));

    OBJJrestApi = new DLLRestApi;

    connect(OBJJrestApi,SIGNAL(balanceToExe(QString)),
            this,SLOT(recBalanceDLL(QString)));
    OwnerID = "1";
    OBJJrestApi->getBalance(OwnerID);
    ui->lineEdit_2->setText(DLLbalance);

    timer = new QTimer;

    connect(timer, SIGNAL(timeout()),
            this,SLOT(backToMain()));

    connect(ui->BTN_draw,SIGNAL(clicked()),
            this, SLOT(buttonClicked()));
    connect(ui->BTN_20,SIGNAL(clicked()),
            this, SLOT(buttonClicked()));
    connect(ui->BTN_40,SIGNAL(clicked()),
            this, SLOT(buttonClicked()));
    connect(ui->BTN_60,SIGNAL(clicked()),
            this, SLOT(buttonClicked()));
    connect(ui->BTN_100,SIGNAL(clicked()),
            this, SLOT(buttonClicked()));
    connect(ui->BTN_200,SIGNAL(clicked()),
            this, SLOT(buttonClicked()));
    connect(ui->BTN_500,SIGNAL(clicked()),
            this, SLOT(buttonClicked()));


}

drawMoney::~drawMoney()
{
    delete ui;
    delete pcustomamount;
    pcustomamount=nullptr;

    delete timer;
    timer=nullptr;

    delete OBJJrestApi;
    OBJJrestApi=nullptr;
}

void drawMoney::on_BTN_close_clicked()
{
    this->close();
    emit startAjastin();
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
    emit startTimer();
    pcustomamount->show();
    timer->stop();
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

void drawMoney::buttonClicked()
{
    timer->start(10000);
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

void drawMoney::backToMain()
{
    this->close();
}

void drawMoney::aloitaAika()
{
    timer->start(10000);
}





