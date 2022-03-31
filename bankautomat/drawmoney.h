#ifndef DRAWMONEY_H
#define DRAWMONEY_H

#include <QDialog>
#include "customamount.h"

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
   QString * perkele = &stringAmount;


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

private:
    Ui::drawMoney *ui;
    customamount * pcustomamount;
    double balance = 1000;
    double numberAmount;
    double doublestrAmount;
    QString stringAmount;

};

#endif // DRAWMONEY_H
