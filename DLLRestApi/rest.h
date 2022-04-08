#ifndef REST_H
#define REST_H

#include "dllrestapi.h"
#include <QNetworkAccessManager>

class Rest : public QObject
{
public:
    Rest(QObject *parent) : QObject(parent)
    ~Rest();
    void login(QString cardnumber, QString pincode);

private:
    QNetworkAccessManager *loginManager;
    QNetworkReply *reply;
    QByteArray response_data;

    QObject * QObject;
};

#endif // REST_H
