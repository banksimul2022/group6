#ifndef TRANSFER_H
#define TRANSFER_H

#include <QDialog>
#include "dllrestapi.h"
#include <QDebug>
#include <QTimer>

namespace Ui {
class transfer;
}

class transfer : public QDialog
{
    Q_OBJECT

public:
    explicit transfer(QWidget *parent = nullptr);
    ~transfer();

signals:
    void updateMainBalance();
    void mainTimerSig();

public slots:
    void receiveAccIDinTransfer(QString);
    void receiveTransferReady();
    void startTransferTimer();
    void transferIdleSlot();
    void recvBalance(QString);
    void clearWarning();
    void recvCardMode(bool);

private slots:
    void on_btn_transfer_clicked();

private:
    Ui::transfer *ui;
    DLLRestApi *objRestApi;
    QString transferAmount;
    QString accID;
    QString recvAccNumber;
    bool credit = false;
    QTimer *timer;
    QTimer *timerWarning;
    QString balance;
};

#endif // TRANSFER_H
