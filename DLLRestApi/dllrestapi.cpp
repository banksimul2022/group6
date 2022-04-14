#include "dllrestapi.h"

DLLRestApi::DLLRestApi(QObject *parent) : QObject(parent)
{
    qDebug() << "Rest-Api DLL muodostin";

}

DLLRestApi::~DLLRestApi()
{
    qDebug() << "DLLRestApi() tuhoaja";
}

void DLLRestApi::login(QString cardnumber, QString pincode) //POST login
{
    qDebug()<< "login() in DLL";
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
    qDebug()<< "loginSlot() in DLL";
    response_data=reply->readAll();
    if(response_data == "true"){
        response_data = "Login successful";
    }
    else if(response_data =="false"){
        response_data = "Cardnumber or pincode is wrong";
    }
    emit loginSignal(response_data);
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
    response_data=reply->readAll();
     qDebug()<<"DATA : "+response_data;
     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
     QString balance;
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        balance+= QString::number(json_obj["balance"].toDouble());
        emit balanceSignal(balance);
     }
     QString name;
     foreach (const QJsonValue &value, json_array) {
           QJsonObject json_obj = value.toObject();
           name+= json_obj["name"].toString();
           emit nameToExe(name);
     }
     reply->deleteLater();
     getBalanceManager->deleteLater();
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
    qDebug()<< "getActionSlot()+ DATA";
    response_data=reply->readAll();
     //qDebug()<<"DATA : "+response_data;
     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
     QString actions;
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        actions+=QString::number((json_obj["id_client"].toInt()))+" "+json_obj["action"].toString()+"   "+QString::number(json_obj["amount"].toDouble())+"€   "+json_obj["action_time"].toString().remove(20,25)+"\r";
        emit actionSignal(actions);
     }
     reply->deleteLater();
     getActionManager->deleteLater();
}




void DLLRestApi::withdrawal(QString acc_id, QString client_id, QString amount)
{
    qDebug()<< "withdrawal in DLL acc->" <<acc_id << ":client->"<<client_id<<" amount: " << amount;
    QJsonObject jsonObj;
    jsonObj.insert("account", acc_id); //acc id
    jsonObj.insert("client", client_id); //client id
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
    emit withdrawalReady();
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
    withdrawalManager->deleteLater();
}


void DLLRestApi::transfer(QString accSend, QString accRecv, QString amount)
{
    qDebug()<< "transfer in DLL account:send->" <<accSend << ":recv->"<<accRecv<<" amount: " << amount;
    QJsonObject jsonObj;
    jsonObj.insert("accSend", accSend);
    jsonObj.insert("accRecv", accRecv);
    jsonObj.insert("amount", amount);
    QString site_url="http://localhost:3000/actions/transfer";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    transferManager = new QNetworkAccessManager(this);
    connect(transferManager, SIGNAL(finished (QNetworkReply*)),
            this, SLOT(transferSlot(QNetworkReply*)));
    reply = transferManager->post(request, QJsonDocument(jsonObj).toJson());
}


void DLLRestApi::transferSlot(QNetworkReply *reply)
{
    qDebug()<< "transferSlot()";
    emit transferReady();
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
    transferManager->deleteLater();
}


void DLLRestApi::getTenActions(QString id)
{
    qDebug()<< "getTenActions()";
    QString site_url="http://localhost:3000/actions/TenActions/";
    site_url.append(id);
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    getActionManager = new QNetworkAccessManager(this);
    connect(getActionManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getActionSlot(QNetworkReply*)));
    reply = getActionManager->get(request);
}

void DLLRestApi::clientIDfromCard(QString card)
{
    qDebug()<< "clientIDfromCard()";
    QString site_url="http://localhost:3000/actions/clientIDfromCard/";
    site_url.append(card);
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    clientIDfromCardManager = new QNetworkAccessManager(this);
    connect(clientIDfromCardManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(clientIDfromCardSlot(QNetworkReply*)));
    reply = clientIDfromCardManager->get(request);
}



void DLLRestApi::clientIDfromCardSlot(QNetworkReply *reply)
{
    qDebug()<< "clientIDfromCardSlot() in DLL";
    response_data=reply->readAll();
     qDebug()<<"DATA clientIDcardSlot: "+response_data;
     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
     QString clientID;
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        clientID+= QString::number((json_obj["id_client"].toInt()));
        emit clientIDsignaltoExe(clientID);
     }
     reply->deleteLater();
     clientIDfromCardManager->deleteLater();
}


QString DLLRestApi::returnResponseData()
{
    return response_data;
}


void DLLRestApi::browseActions(QString arvo, QString id)
{
    qDebug()<< "browseActions() in DLL";
    QJsonObject jsonObj;
    jsonObj.insert("arvo", arvo);
    jsonObj.insert("id", id);
    QString site_url="http://localhost:3000/actions/Prev10Actions";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    prev10actionsManager = new QNetworkAccessManager(this);
    connect(prev10actionsManager, SIGNAL(finished (QNetworkReply*)),
            this, SLOT(browseActionsSlot(QNetworkReply*)));
    reply = prev10actionsManager->post(request, QJsonDocument(jsonObj).toJson());
}



void DLLRestApi::browseActionsSlot(QNetworkReply *reply)
{
    qDebug()<< "browseActionsSlot() in DLL";
    response_data=reply->readAll();
    qDebug()<<response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString prev10;
    foreach (const QJsonValue &value, json_array) {
       QJsonObject json_obj = value.toObject();
       prev10+=QString::number((json_obj["id_client"].toInt()))+" "+json_obj["action"].toString()+"   "+QString::number(json_obj["amount"].toDouble())+"€   "+json_obj["action_time"].toString().remove(20,25)+"\r";
       emit browseActions(prev10);
    }
    reply->deleteLater();
    prev10actionsManager->deleteLater();
}


void DLLRestApi::accountIDfromCard(QString card)
{
    qDebug()<< "accountIDfromCard()";
    QString site_url="http://localhost:3000/actions/accountIDfromCard/";
    site_url.append(card);
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    accountIDfromCardManager = new QNetworkAccessManager(this);
    connect(accountIDfromCardManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(accountIDfromCardSlot(QNetworkReply*)));
    reply = accountIDfromCardManager->get(request);
}



void DLLRestApi::accountIDfromCardSlot(QNetworkReply *reply)
{
    qDebug()<< "accountIDfromCardSlot() in DLL";
    response_data=reply->readAll();
     qDebug()<<"DATA clientIDcardSlot: "+response_data;
     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
     QString accountID;
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        accountID+= QString::number((json_obj["id_bank_account"].toInt()));
        emit accountIDsignalToExe(accountID);
     }
     reply->deleteLater();
     clientIDfromCardManager->deleteLater();
}


void DLLRestApi::getCardInfo(QString card)
{
    qDebug()<< "getCardInfo()";
    QString site_url="http://localhost:3000/card/getByCard/";
    site_url.append(card);
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    cardInfoManager = new QNetworkAccessManager(this);
    connect(cardInfoManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(cardInfoSlot(QNetworkReply*)));
    reply = cardInfoManager->get(request);
}

void DLLRestApi::cardInfoSlot(QNetworkReply *reply)
{
     qDebug()<< "cardInfoSlot() in DLL";
     response_data=reply->readAll();
     qDebug()<<"DATA: "+response_data;
     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
     QString card;
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        card+= QString::number((json_obj["locked"].toInt()));
        qDebug()<< "cardInfoSlot() in DLL INFO:->" << card;
        emit cardInfoSignalToExe(card);
     }
     reply->deleteLater();
     clientIDfromCardManager->deleteLater();
}


