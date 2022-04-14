#ifndef TRANSFER_H
#define TRANSFER_H

#include <QDialog>
#include "dllrestapi.h"
#include <QDebug>

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

public slots:
    void receiveAccIDinTransfer(QString);
    void receiveTransferReady();

private slots:
    void on_btn_transfer_clicked();

private:
    Ui::transfer *ui;
    DLLRestApi *objRestApi;
    QString transferAmount;
    QString accID;
    QString receiverAccID;
};

#endif // TRANSFER_H
