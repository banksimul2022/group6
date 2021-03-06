#include "drawmoneycustom.h"
#include "ui_drawmoneycustom.h"

DrawMoneyCustom::DrawMoneyCustom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DrawMoneyCustom)
{
    ui->setupUi(this);
    timer = new QTimer;

    setWindowFlag(Qt::WindowStaysOnTopHint);
    setWindowModality(Qt::ApplicationModal);

    connect(timer, SIGNAL(timeout()),
            this, SLOT(customIdleSlot()));
}

DrawMoneyCustom::~DrawMoneyCustom()
{
    delete ui;

    delete timer;
    timer = nullptr;
}

void DrawMoneyCustom::startCustomTimer()
{
    qDebug()<< "startCustomTimer()";
    timer->start(10000);
}

void DrawMoneyCustom::customIdleSlot()
{
    qDebug()<< "customIdleSlot()";
    emit drawMoneyTimerSignal();
    this->close();
}


void DrawMoneyCustom::on_btn_confirmCustomAmount_clicked()
{
    customAmount = ui->le_customAmount->text();
    timer->stop();
    emit drawMoneyTimerSignal();
    emit customAmountSignal(customAmount);
    this->close();
}

