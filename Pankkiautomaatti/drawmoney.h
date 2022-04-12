#ifndef DRAWMONEY_H
#define DRAWMONEY_H

#include <QDialog>
#include "drawmoneycustom.h"
#include <QDebug>
#include "dllrestapi.h"


namespace Ui {
class DrawMoney;
}

class DrawMoney : public QDialog
{
    Q_OBJECT

public:
    explicit DrawMoney(QWidget *parent = nullptr);
    ~DrawMoney();

signals:
    void updateBalanceMainWindow();

public slots:
    void receiveCustomAmount(QString);
    void receiveClientIDinDrawMoney(QString);
    void receiveWithdrawalReady();
    void receiveBalance(QString);
    void receiveClientName(QString);

private slots:
    void on_btn_Draw20_clicked();

    void on_btn_Draw40_clicked();

    void on_btn_Draw60_clicked();

    void on_btn_Draw100_clicked();

    void on_btn_Draw200_clicked();

    void on_btn_Draw500_clicked();

    void on_btn_customAmount_clicked();

    void on_btn_Draw_clicked();

private:
    Ui::DrawMoney *ui;
    QString drawAmount;
    DrawMoneyCustom *objDrawCustom;
    DLLRestApi *objRestApi;
    QString clientID;
    QString clientName;
    QString balance;



};


#endif // DRAWMONEY_H
