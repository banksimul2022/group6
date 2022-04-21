#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "dllrestapi.h"
#include "drawmoney.h"
#include <QTimer>
#include "transfer.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void receiveCLientIDfromLogin(QString);
    void receiveActions(QString);
    void receiveBalance(QString);
    void receiveClientName(QString);
    void updateBalanceSlot();
    void receivePrev10(QString);
    void receiveAccountIDfromLogin(QString);
    void startMainTimer();
    void mainIdleSlot();


signals:
    void clientIDtoDrawMoney(QString);
    void accountIDtoDrawMoney(QString);
    void accountIDtoTransfer(QString);
    void balanceSig(QString);
    void cardModeSignal(bool);


private slots:
    void on_btn_balance_clicked();

    void on_btn_drawMoney_clicked();



    void on_btn_logOut_clicked();

    void on_btn_10actions_clicked();

    void on_btn_prev10actions_clicked();

    void on_btn_next10actions_clicked();

    void on_btn_Siirto_clicked();

    void on_btn_debit_clicked();

    void on_btn_credit_clicked();

private:
    Ui::MainWindow *ui;
    DLLRestApi *objRestApi;
    DrawMoney *objDrawMoney;
    QString accountID;
    QString balance;
    QString actions;
    QString clientID;
    QString clientName;
    bool credit = false;
    QTimer *timer;
    transfer *objTransfer;


    int browseActions = 0;



};
#endif // MAINWINDOW_H
