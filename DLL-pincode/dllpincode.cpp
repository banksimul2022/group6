#include "dllpincode.h"
#include "ui_pincode.h"
#include "pincode.h"



DLLpincode::DLLpincode(QObject *parent) : QObject(parent)
{
    qDebug() << "PINCODE DLL muodostin";
    objPincode = new Pincode;

    connect(objPincode, SIGNAL(pincodeFromUI()),
            this, SLOT(pincodeSlot()));
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

