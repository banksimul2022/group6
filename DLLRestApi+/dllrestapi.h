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


private slots:
    void loginSlot (QNetworkReply *reply);



private:
    QNetworkAccessManager *loginManager;
    QNetworkReply *reply;
    QByteArray response_data;

};

#endif // DLLRESTAPI_H
