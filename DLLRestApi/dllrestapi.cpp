#include "dllrestapi.h"




DLLRestApi::DLLRestApi(QObject *parent) : QObject(parent)
{

}

DLLRestApi::~DLLRestApi()
{

}

void DLLRestApi::login(QString cardnumber, QString pincode)
{
    QJsonObject jsonObj;
    jsonObj.insert("cardnumber", cardnumber);
    jsonObj.insert("pincode", pincode);


    QString site_url="http://localhost:3000/login";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    loginManager = new QNetworkAccessManager(this);

    connect(loginManager, SIGNAL(finished (QNetworkReply*)),
            this, SLOT(loginSlot(QNetworkReply*)));

    reply = loginManager->post(request, QJsonDocument(jsonObj).toJson());
}

void DLLRestApi::loginSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    if(response_data == "true"){
        response_data = "Login successful";
    }

    else if(response_data =="false"){
        response_data = "Cardnumber or pincode is wrong";
    }

    qDebug()<<response_data;
    reply->deleteLater();
    loginManager->deleteLater();

}

