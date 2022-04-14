#ifndef PINCODE_H
#define PINCODE_H

#include <QDialog>
#include <QDebug>


namespace Ui {
class Pincode;
}

class Pincode : public QDialog
{
    Q_OBJECT

public:
    explicit Pincode(QWidget *parent = nullptr);
    ~Pincode();
    QString returnPincode();

signals:
    void pincodeFromUI();
    void resetTimerSignal();
    void cancelPINSignal();

public slots:
    void resetLoginTimer();

private slots:
    void on_BTN_1_clicked();

    void on_BTN_2_clicked();

    void on_BTN_3_clicked();

    void on_BTN_4_clicked();

    void on_BTN_5_clicked();

    void on_BTN_6_clicked();

    void on_BTN_7_clicked();

    void on_BTN_8_clicked();

    void on_BTN_9_clicked();

    void on_BTN_0_clicked();

    void on_BTN_clear_clicked();

    void on_BTN_ok_clicked();

    void on_btn_cancel_clicked();

private:
    Ui::Pincode *ui;
    QString stringPincode;
    QString stringstar;
};

#endif // PINCODE_H
