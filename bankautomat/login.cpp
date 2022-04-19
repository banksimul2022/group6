#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    objRestApi = new DLLRestApi;
    objPincode = new DLLpincode;
    objMainWindow = new MainWindow;

    connect(objPincode, SIGNAL(signalPincode(QString)), // PIN DLL->EXE
            this, SLOT(receivePincode(QString)));

    connect(objRestApi, SIGNAL(loginSignal()),
            this, SLOT(receiveLogin()));
    connect(this, SIGNAL(testiSignal()),
            objRestApi, SLOT(withdrawalSlot()));

}

login::~login()
{
    delete ui;

    delete objRestApi;
    objRestApi = nullptr;

    delete objPincode;
    objPincode = nullptr;

    delete objMainWindow;
    objMainWindow = nullptr;

}

void login::checkLogin()
{
    qDebug() << "checkLogin() in EXE card" << cardnumber;

    //objPincode = new DLLpincode;
    objPincode->showPincodeUI();

    //objPincode->getPincode();
    //qDebug() << "checkLogin() in EXE pin" << pincode;
    //objRestApi->login(cardnumber, pincode);

    //objRestApi->lo

}

/*void login::receiveRFIDcard(QString card) //kortinnumero DLL->EXE
{
    cardnumber = card;
    ui->le_RFID->setText(cardnumber);
    qDebug() << "receiveRFIDcard() in EXE" << cardnumber;
}*/

void login::receiveLogin()
{
    objMainWindow->show();
    qDebug() << "receiveLogin() in EXE";

    qDebug() << "loginTries: " <<loginTries;
    if(loginTries == 3)
    {
        qDebug() << "LOGIN FAILED 3 TIMES, CARD LOCKED";
    }


}

void login::receivePincode(QString pin) // PIN DLL->EXE
{
    pincode = pin;
    qDebug() << "receivePincode() in EXE" << pincode;
    objRestApi->login(cardnumber, pincode);
}

void login::on_BTN_testi_clicked()
{
    cardnumber=ui->lineEdit->text();
    objPincode->showPincodeUI();
    emit testiSignal();
}

