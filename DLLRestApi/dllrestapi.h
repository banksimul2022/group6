#ifndef DLLRESTAPI_H
#define DLLRESTAPI_H

#include "DLLRestApi_global.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QObject>
#include <QString>

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


    QNetworkAccessManager *getWithdrawalManager() const;
    void setWithdrawalManager(QNetworkAccessManager *newWithdrawalManager);

signals:
    //void loginSignal();
    void balanceSignal(QString);
    void balanceToExe(QString);

    void actionSignal(QString);
    void fiveActionsToExe(QString);

    void sendWithdrawalSignal();



private slots:
    void loginSlot (QNetworkReply *reply);

    void getBalanceSlot (QNetworkReply *reply);
    void receiveBalanceSignal(QString);

    void getActionSlot(QNetworkReply *reply);


    void receiveActionSignal(QString);

    void withdrawalSlot(QNetworkReply *reply);



private:
    QNetworkAccessManager *loginManager;
    QNetworkAccessManager *getBalanceManager;
    QNetworkAccessManager *getActionManager;
    QNetworkAccessManager *withdrawalManager;


    QNetworkReply *reply;
    QByteArray response_data;


};

#endif // DLLRESTAPI_H
