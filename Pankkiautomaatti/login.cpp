#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    objRFID = new DLLRFIDtesti(this);
    objRestApi = new DLLRestApi(this);
    objPincode = new DLLpincode(this);
    objMainWindow = new MainWindow;



    connect(objRFID, SIGNAL(signalRFIDcard(QString)), //kortinnumero DLL->EXE
            this, SLOT(receiveRFIDcard(QString)));

    connect(objPincode, SIGNAL(signalPincode(QString)), // PIN DLL->EXE
            this, SLOT(receivePincode(QString)));

    connect(objRestApi, SIGNAL(loginSignal(QString)),
            this, SLOT(receiveLogin(QString)));


    connect(objRestApi, SIGNAL(clientIDsignaltoExe(QString)),
            this, SLOT(receiveClientID(QString)));

    connect(this, SIGNAL(clientIDtoMainWindow(QString)),                //clientID --- login->>mainwindow
            objMainWindow, SLOT(receiveCLientIDfromLogin(QString)));

    connect(objMainWindow, SIGNAL(logOutSignal()),
            this, SLOT(loggedOutSlot()));



    objRFID->getRFIDcard();

    if(cardnumber != "")
    {
        this->checkLogin();
    }
}

login::~login()
{
    qDebug() << "~login() tuhoaja exes" << cardnumber;
    delete ui;

    delete objRFID;
    objRFID = nullptr;

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

    objPincode->showPincodeUI();

    //objPincode->getPincode();
    //qDebug() << "checkLogin() in EXE pin" << pincode;
    //objRestApi->login(cardnumber, pincode);




    //objRestApi->lo

}

void login::receiveRFIDcard(QString card) //kortinnumero DLL->EXE
{
    cardnumber = card;
    ui->le_RFID->setText(cardnumber);
    qDebug() << "receiveRFIDcard() in EXE" << cardnumber;
}

void login::receiveLogin(QString loginInfo)
{
    qDebug() << "receiveLogin() in EXE";

    qDebug() << "loginTries: " <<loginTries;
    if(loginTries == 3)
    {
        qDebug() << "LOGIN FAILED 3 TIMES, CARD LOCKED";
        objPincode->closePincodeUI();
    }


    if(loginInfo == "Login successful" && loginTries != 3)
    {
        delete objPincode;
        objPincode = nullptr;

        objMainWindow->show();
        objRestApi->clientIDfromCard(cardnumber);
        //qDebug() << "login iffi clientID="<<clientID;
        //objRestApi->getBalance(clientID);
        loginTries = 1;
    }
    else {
        qDebug() << "login else == väärä pin tai kortti lukittu";
        loginTries++;
    }

}

void login::receivePincode(QString pin) // PIN DLL->EXE
{
    pincode = pin;
    qDebug() << "receivePincode() in EXE" << pincode;
    objRestApi->login(cardnumber, pincode);
}

void login::receiveClientID(QString id)
{
    clientID = id;
    qDebug() << "receiveClientID() in EXE" << clientID;
    emit clientIDtoMainWindow(clientID);

}

void login::loggedOutSlot()
{
    qDebug() << "loggedOutSlot() in login";

    this->show();
}




void login::on_btn_showPINui_clicked()
{
    objPincode = new DLLpincode;
    this->checkLogin();
}

