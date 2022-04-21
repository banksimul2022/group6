#ifndef DLLRESTAPI_H
#define DLLRESTAPI_H

#include "DLLRestApi_global.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QObject>
#include <QString>
#include <QDebug>

class DLLRESTAPI_EXPORT DLLRestApi : public QObject
{
    Q_OBJECT

public:
    DLLRestApi(QObject * parent = nullptr);
    ~DLLRestApi();
    void login(QString cardnumber, QString pincode);
    void getBalance(QString id);
    void getAction(QString);
    void withdrawal(QString, QString, QString);
    void getTenActions(QString);
    void clientIDfromCard(QString);
    void browseActions(QString arvo, QString id);
    void accountIDfromCard(QString);
    QString returnResponseData();
    void transfer(QString, QString, QString);
    void getCardInfo(QString);
    void cardLock(QString);

signals:
    void balanceSignal(QString);
    void actionSignal(QString);
    void browseActions(QString);
    void sendWithdrawalSignal();
    void nameToExe(QString);
    void withdrawalReady();
    void clientIDsignaltoExe(QString);
    void loginSignal(QString);
    void accountIDsignalToExe(QString);
    void transferReady();
    void cardInfoSignalToExe(QString);
    void cardLockReady();



private slots:
    void loginSlot (QNetworkReply *reply);
    void getBalanceSlot (QNetworkReply *reply);
    void getActionSlot(QNetworkReply *reply);
    void withdrawalSlot(QNetworkReply *reply);
    void clientIDfromCardSlot(QNetworkReply *reply);
    void browseActionsSlot(QNetworkReply *reply);
    void accountIDfromCardSlot(QNetworkReply *reply);
    void transferSlot(QNetworkReply *reply);
    void cardInfoSlot(QNetworkReply *reply);
    void cardLockSlot(QNetworkReply *reply);



private:
    QNetworkAccessManager *loginManager;
    QNetworkAccessManager *getBalanceManager;
    QNetworkAccessManager *getActionManager;
    QNetworkAccessManager *withdrawalManager;
    QNetworkAccessManager *clientIDfromCardManager;
    QNetworkAccessManager *prev10actionsManager;
    QNetworkAccessManager *accountIDfromCardManager;
    QNetworkAccessManager *transferManager;
    QNetworkAccessManager *cardInfoManager;
    QNetworkAccessManager *cardLockManager;



    QNetworkReply *reply;
    QByteArray response_data;


};

#endif // DLLRESTAPI_H
