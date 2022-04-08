#include "customamount.h"
#include "ui_customamount.h"


customamount::customamount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customamount)
{
    ui->setupUi(this);

}

customamount::~customamount()
{
    delete ui;
}

void customamount::on_BTN_draw_clicked()
{
    custom = ui->lineEdit->text();
    emit sendText(custom);
    this->close();

}

