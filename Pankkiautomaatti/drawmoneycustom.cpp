#include "drawmoneycustom.h"
#include "ui_drawmoneycustom.h"

DrawMoneyCustom::DrawMoneyCustom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DrawMoneyCustom)
{
    ui->setupUi(this);
}

DrawMoneyCustom::~DrawMoneyCustom()
{
    delete ui;
}

void DrawMoneyCustom::on_btn_confirmCustomAmount_clicked()
{
    customAmount = ui->le_customAmount->text();
    emit customAmountSignal(customAmount);
    this->close();
}

