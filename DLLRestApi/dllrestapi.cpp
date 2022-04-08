#include "dllrestapi.h"



DLLRestApi::DLLRestApi(QObject *parent) : QObject(parent)
{


    connect(this, SIGNAL(balanceSignal(QString)),
            this, SLOT(receiveBalanceSignal(QString)));

    connect(this, SIGNAL(actionSignal(QString)),
            this, SLOT(receiveActionSignal(QString)));
}

DLLRestApi::~DLLRestApi()
{

}

void DLLRestApi::login(QString cardnumber, QString pincode) //POST login
{
    qDebug()<< "login()";
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
    qDebug()<< "loginSlot()";
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



void DLLRestApi::getBalance(QString id)
{
    QString site_url="http://localhost:3000/actions/balance/";
    site_url.append(id);
    qDebug() << site_url;
    QNetworkRequest request((site_url));

    getBalanceManager = new QNetworkAccessManager(this);

    connect(getBalanceManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getBalanceSlot(QNetworkReply*)));

    reply = getBalanceManager->get(request);
}


void DLLRestApi::getBalanceSlot(QNetworkReply *reply)
{
    qDebug()<< "getBalanceSlot()";
    response_data=reply->readAll();
     qDebug()<<"DATA : "+response_data;
     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
     QString balance;
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        //balance+=QString::number((json_obj["balance"].toInt()))+" "+json_obj["name"].toString();
        //balance+= json_obj["name"].toString()+" "+QString::number(json_obj["balance"].toDouble());
        balance+= QString::number(json_obj["balance"].toDouble());

        emit balanceSignal(balance);
        qDebug()<< "balance->>>" << balance;
     }
     QString name;
     foreach (const QJsonValue &value, json_array) {
           QJsonObject json_obj = value.toObject();
           name+= json_obj["name"].toString();


        emit nameToExe(name);
        qDebug()<< "balance->>>" << balance;
     }
     reply->deleteLater();
     getBalanceManager->deleteLater();
}



void DLLRestApi::receiveBalanceSignal(QString balance)
{
    qDebug()<< "receiveBalanceSignal->>>emit balancetoEXE" << balance;
    emit balanceToExe(balance); //send balance information to EXE
}




void DLLRestApi::getAction(QString id)
{
    QString site_url="http://localhost:3000/actions/FiveActions/";
    site_url.append(id);
    qDebug() << site_url;
    QNetworkRequest request((site_url));

    getActionManager = new QNetworkAccessManager(this);

    connect(getActionManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getActionSlot(QNetworkReply*)));

    reply = getActionManager->get(request);
}




void DLLRestApi::getActionSlot(QNetworkReply *reply)
{
    qDebug()<< "getActionSlot()";
    response_data=reply->readAll();
     qDebug()<<"DATA : "+response_data;
     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
     QString actions;
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        actions+=QString::number((json_obj["id_client"].toInt()))+" "+json_obj["action"].toString()+" "+QString::number(json_obj["amount"].toDouble())+" "+json_obj["action_time"].toString()+"\r";

        emit actionSignal(actions);
        //qDebug()<< "actions->>>" << actions;
     }
     reply->deleteLater();
     getActionManager->deleteLater();
}

void DLLRestApi::receiveActionSignal(QString actions)
{
    qDebug()<< "receiveActionSignal->>>emit fiveActionsToEXE" << actions;
    emit fiveActionsToExe(actions); //send five newest account actions to exe
}



void DLLRestApi::withdrawal(QString id, QString amount)
{
    qDebug()<< "withdrawal";
    QJsonObject jsonObj;
    jsonObj.insert("id", id); //client id
    jsonObj.insert("amount", amount); //withdrawal amount
    QString site_url="http://localhost:3000/actions/withdrawal";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    withdrawalManager = new QNetworkAccessManager(this);
    connect(withdrawalManager, SIGNAL(finished (QNetworkReply*)),
            this, SLOT(withdrawalSlot(QNetworkReply*)));
    reply = withdrawalManager->post(request, QJsonDocument(jsonObj).toJson());
}



void DLLRestApi::withdrawalSlot(QNetworkReply *reply)
{
    qDebug()<< "withdrawalSlot()";
    response_data=reply->readAll();
    qDebug()<<response_data;

    reply->deleteLater();
    withdrawalManager->deleteLater();
}


void DLLRestApi::getTenActions(QString id)
{
    QString site_url="http://localhost:3000/actions/TenActions/";
    site_url.append(id);
    qDebug() << site_url;
    QNetworkRequest request((site_url));

    getActionManager = new QNetworkAccessManager(this);

    connect(getActionManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getActionSlot(QNetworkReply*)));

    reply = getActionManager->get(request);
}




