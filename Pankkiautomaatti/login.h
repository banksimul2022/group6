#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "dllrfidtesti.h"
#include "dllrestapi.h"
#include "dllpincode.h"
#include "mainwindow.h"
#include <QDebug>


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
    void loggedOutSlot();

signals:
    void clientIDtoMainWindow(QString);

private slots:

    void on_btn_showPINui_clicked();

private:
    Ui::login *ui;
    DLLRFIDtesti *objRFID;
    DLLRestApi *objRestApi;
    DLLpincode *objPincode;
    QString cardnumber;
    QString pincode;
    QString clientID;

    short loginTries = 1;
    MainWindow *objMainWindow;

};

#endif // LOGIN_H
