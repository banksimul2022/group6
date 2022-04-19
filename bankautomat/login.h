#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
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
    void receiveLogin();
    void receivePincode(QString);

private slots:
    void on_BTN_testi_clicked();
signals:
    void testiSignal();

private:
    Ui::login *ui;
    DLLRestApi *objRestApi;
    DLLpincode *objPincode;
    QString cardnumber;
    QString pincode;
    short loginTries = 1;
    MainWindow *objMainWindow;

};

#endif // LOGIN_H
