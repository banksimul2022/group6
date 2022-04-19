#include "customamount.h"
#include "ui_customamount.h"



customamount::customamount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customamount)
{
    ui->setupUi(this);
    timer = new QTimer;

    connect(timer, SIGNAL(timeout()),
            this,SLOT(kiinni()));
    connect(timer, SIGNAL(timeout()),
            this, SLOT(resetTimer()));

}

customamount::~customamount()
{
    qDebug()<<"customamount tuhoaja";
    delete ui;

    delete timer;
    timer=nullptr;
}

void customamount::kiinni()
{
    if(this->isActiveWindow()){
    aika++;
    qDebug()<<aika;
    if(aika==10)
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

void customamount::ajastin()
{
    timer->start(1000);
}

void customamount::resetTimer()
{
    if(aika==9)
    {
        emit startAjastin();
    }
}

void customamount::on_BTN_draw_clicked()
{
    custom = ui->lineEdit->text();
    emit sendText(custom);
    this->close();
    timer->stop();
    emit startAjastin();
}

