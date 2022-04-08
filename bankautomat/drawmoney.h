#ifndef DRAWMONEY_H
#define DRAWMONEY_H
#include <QDialog>
#include "customamount.h"
#include "dllrestapi.h"
#include "mainwindow.h"
#include <QObject>

class MainWindow;

namespace Ui {
class drawMoney;
}

class drawMoney : public QDialog
{
    Q_OBJECT


public:
    explicit drawMoney(QWidget *parent = nullptr);
    ~drawMoney();
    QString Customdraw;



private slots:
    void on_BTN_close_clicked();

    void on_BTN_draw_clicked();

    void on_BTN_muu_clicked();

    void on_BTN_20_clicked();

    void on_BTN_40_clicked();

    void on_BTN_60_clicked();

    void on_BTN_100_clicked();

    void on_BTN_200_clicked();

    void on_BTN_500_clicked();

public slots:
    void recvValue(QString t);
    void recBalanceDLL(QString);

signals:
    void sendBalance(double);
    void balanceDrawmoney(QString);


private:
    Ui::drawMoney *ui;
    customamount * pcustomamount;
    MainWindow *Clicked;
    QString stringAmount;
    DLLRestApi *OBJJrestApi;
    QString DLLbalance;
    double DoubleDLLBalance;
    double DoubleDLLStringAmount;
    double doubleDLLt;
    QString SignaltoDraw;
    QString OwnerID;


};

#endif // DRAWMONEY_H
