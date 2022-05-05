#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    QString applicationPath = QDir::currentPath();
    qDebug() << applicationPath;
    ui->setupUi(this);
    QPixmap pix(applicationPath + "/../massikeisarilogo.png");
    ui->logo->setPixmap(pix);
    objRFID = new RFID;
    objRestApi = new DLLRestApi(this);
    objPincode = new DLLpincode(this);
    objMainWindow = new MainWindow;
    objRFID->USB_Alustus();
    timer = new QTimer;
    timerWarning = new QTimer;
    timerRFID = new QTimer;

    connect(timerRFID,SIGNAL(timeout()),this,SLOT(timerRFIDfunction()));

    connect(objPincode, SIGNAL(signalPincode(QString)), // PIN DLL->EXE
            this, SLOT(receivePincode(QString)));

    connect(objRestApi, SIGNAL(loginSignal(QString)), //login success / fail
            this, SLOT(receiveLogin(QString)));

    connect(objRestApi, SIGNAL(clientIDsignaltoExe(QString)),
            this, SLOT(receiveClientID(QString)));

    connect(this, SIGNAL(clientIDtoMainWindow(QString)),
            objMainWindow, SLOT(receiveCLientIDfromLogin(QString)));

    connect(objRestApi, SIGNAL(accountIDsignalToExe(QString)),
            this, SLOT(receiveAccountID(QString)));

    connect(this, SIGNAL(accountIDtoMainWindow(QString)),
            objMainWindow, SLOT(receiveAccountIDfromLogin(QString)));

    connect(this, SIGNAL(MainTimerSignal()),
            objMainWindow, SLOT(startMainTimer()));

    connect(objPincode, SIGNAL(resetLoginTimerSignal()),
            this, SLOT(resetTimer()));

    connect(timer, SIGNAL(timeout()),
            this, SLOT(loginIdleSlot()));

     connect(objPincode, SIGNAL(cancelPincodeLogin()),
             this, SLOT(loginIdleSlot()));

     connect(objRestApi, SIGNAL(cardInfoSignalToExe(QString)),
             this, SLOT(receiveCardInfo(QString)));

     connect(this, SIGNAL(wrongPinSignal()),
             objPincode, SLOT(exeWrongPin()));

     connect(objRestApi, SIGNAL(cardLockReady()),
             this, SLOT(cardLockInfo()));

     connect(timerWarning, SIGNAL(timeout()),
             this, SLOT(loginIdleSlot()));

     connect(this, SIGNAL(cardLockWarning()),
             objPincode, SLOT(exeCardLockWarning()));

     timerRFID->start(1000);

    /*
    if(cardnumber != "")
    {
        this->checkLogin();
    }

    */
}

login::~login()
{
    delete ui;

    delete objRFID;
    objRFID = nullptr;

    delete objRestApi;
    objRestApi = nullptr;

    delete objPincode;
    objPincode = nullptr;

    delete objMainWindow;
    objMainWindow = nullptr;

    delete timer;
    timer = nullptr;

    delete timerWarning;
    timerWarning = nullptr;

}


/*void login::receiveRFIDcard(QString card) //kortinnumero DLL->EXE
{
    //cardnumber = card;
    cardnumber = "1111";
    ui->le_RFID->setText(cardnumber);
    qDebug() << "receiveRFIDcard() in EXE" << cardnumber;
    objRestApi->getCardInfo(cardnumber);
    //this->close

}*/

void login::receiveLogin(QString loginInfo) //timer napit -> pincode.dll
{
    qDebug() << "receiveLogin() in EXE";

    qDebug() << "loginTries: " <<loginTries;

    if(loginTries == 3 || cardLocked == '1')
    {  
        objRestApi->cardLock(cardnumber);
        emit cardLockWarning();
    } else {
        emit wrongPinSignal();
        loginTries++;
    }

    if(loginInfo == "Login successful" && cardLocked == '0')
    {
        delete objPincode;
        objPincode = nullptr;
        objMainWindow->show();
        objRestApi->clientIDfromCard(cardnumber);
        objRestApi->accountIDfromCard(cardnumber);
        emit MainTimerSignal();
        timer->stop();
        loginTries = 1;
    }
}

void login::cardLockInfo()
{
    timerWarning->start(2000);
}

void login::timerRFIDfunction()
{
    objRFID->Luku();
    if(objRFID->card==1){
        qDebug() << "card=1";
        timerRFID->stop();
        cardnumber = objRFID->printLine;
        objRestApi->getCardInfo(cardnumber);
        objPincode->showPincodeUI();
        objRFID->card=0;
        this->close();
    }
}

void login::receiveCardInfo(QString info)
{
    qDebug() << "receiveCardInfo() in EXE" << info;
    cardLocked = info;
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

void login::receiveAccountID(QString id)
{
    accountID = id;
    qDebug() << "receiveAccountID() in EXE" << accountID;
    emit accountIDtoMainWindow(accountID);
}

void login::resetTimer()
{
    qDebug() << "resetTimer() in login";
    timer->start(10000);
}

void login::loginIdleSlot()
{
     qDebug() << "loginIdleSlot() in login";
     qApp->quit();
     QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

void login::on_btn_pinUI_clicked()
{
    objPincode->showPincodeUI();
    timer->start(10000);
}

