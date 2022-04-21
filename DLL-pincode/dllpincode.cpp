#include "dllpincode.h"
#include "ui_pincode.h"
#include "pincode.h"



DLLpincode::DLLpincode(QObject *parent) : QObject(parent)
{
    qDebug() << "PINCODE DLL muodostin";

    objPincode = new Pincode;

    connect(objPincode, SIGNAL(pincodeFromUI()),
            this, SLOT(pincodeSlot()));

    connect(objPincode, SIGNAL(resetTimerSignal()),
            this, SLOT(receiveTimerSignalFromUI()));


    connect(objPincode, SIGNAL(cancelPINSignal()),
            this, SLOT(receiveCancelPin()));

    connect(this, SIGNAL(wrongPinToUI()),
            objPincode, SLOT(updateScreen()));

    connect(this, SIGNAL(cardLockToUI()),
            objPincode, SLOT(cardLockInfo()));

}

DLLpincode::~DLLpincode()
{
    qDebug() << "DLL_pincode tuhoaja";
    delete objPincode;
    objPincode = nullptr;
}

void DLLpincode::showPincodeUI()
{
    qDebug() << "showPincodeUI()";
    objPincode->show();
}

void DLLpincode::closePincodeUI()
{
    objPincode->close();
}


void DLLpincode::getPincode()
{
    qDebug() << "getPincode()";  
}

void DLLpincode::pincodeSlot()
{
    pincode = objPincode->returnPincode();
    qDebug() << "pincodeSlot() in DLL" << pincode;
    emit signalPincode(pincode);
}

void DLLpincode::receiveTimerSignalFromUI()
{
    emit resetLoginTimerSignal();
}

void DLLpincode::receiveCancelPin()
{
    emit cancelPincodeLogin();
}

void DLLpincode::exeWrongPin()
{
    emit wrongPinToUI();
}

void DLLpincode::exeCardLockWarning()
{
    emit cardLockToUI();
}

