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


}

customamount::~customamount()
{
    delete ui;

    delete timer;
    timer=nullptr;
}

void customamount::kiinni()
{
    this->close();
}

void customamount::ajastin()
{
    timer->start(10000);
}

void customamount::on_BTN_draw_clicked()
{
    custom = ui->lineEdit->text();
    emit sendText(custom);
    this->close();

    if(this->close())
    {
        qDebug()<<"Ajastin päälle";
        emit startAjastin();
    }
}

