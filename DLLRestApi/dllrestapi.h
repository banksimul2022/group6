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
    void withdrawal(QString, QString);
    void getTenActions(QString);
    void clientIDfromCard(QString);
    void browseActions(QString arvo, QString id);
    QString returnResponseData();

signals:
    void balanceSignal(QString);
    void actionSignal(QString);
    void browseActions(QString);
    void sendWithdrawalSignal();
    void nameToExe(QString);
    void withdrawalReady();
    void clientIDsignaltoExe(QString);
    void loginSignal(QString);



private slots:
    void loginSlot (QNetworkReply *reply);
    void getBalanceSlot (QNetworkReply *reply);
    void getActionSlot(QNetworkReply *reply);
    void withdrawalSlot(QNetworkReply *reply);
    void clientIDfromCardSlot(QNetworkReply *reply);
    void browseActionsSlot(QNetworkReply *reply);



private:
    QNetworkAccessManager *loginManager;
    QNetworkAccessManager *getBalanceManager;
    QNetworkAccessManager *getActionManager;
    QNetworkAccessManager *withdrawalManager;
    QNetworkAccessManager *clientIDfromCardManager;
    QNetworkAccessManager *prev10actionsManager;
    QNetworkReply *reply;
    QByteArray response_data;


};

#endif // DLLRESTAPI_H
