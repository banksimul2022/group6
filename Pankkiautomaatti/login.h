#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "dllrfidtesti.h"
#include "dllrestapi.h"
#include "dllpincode.h"
#include "mainwindow.h"
#include <QDebug>
#include <QTimer>


namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();
    void checkLogin();

public slots:
    void receiveRFIDcard(QString);
    void receiveLogin(QString);
    void receivePincode(QString);
    void receiveClientID(QString);
    void receiveAccountID(QString);
    void loggedOutSlot();
    void resetTimer();
    void loginIdleSlot();
    void receiveCardInfo(QString);
    void cardLockInfo();

signals:
    void clientIDtoMainWindow(QString);
    void accountIDtoMainWindow(QString);
    void MainTimerSignal();
    void wrongPinSignal();
    void cardLockWarning();


private slots:
    void on_btn_pinUI_clicked();

private:
    Ui::login *ui;
    DLLRFIDtesti *objRFID;
    DLLRestApi *objRestApi;
    DLLpincode *objPincode;
    QString cardnumber;
    QString pincode;
    QString clientID;
    QString accountID;
    QTimer *timer;
    QTimer *timerWarning;
    QString cardLocked;


    short loginTries = 1;
    MainWindow *objMainWindow;

};

#endif // LOGIN_H
