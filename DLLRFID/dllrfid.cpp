#include "dllrfid.h"
#include <QSerialPort>
#include <QDebug>
#include "synchapi.h"


DLLRFID::DLLRFID()
{

}

DLLRFID::~DLLRFID()
{

}
void DLLRFID::Alustus(){
    objectSerialPort=new QSerialPort;
    objectSerialPort->setBaudRate(9600);
    objectSerialPort->setPortName("COM3");
    objectSerialPort->open(QIODevice::ReadOnly);

}
void DLLRFID::USBCheck(){
    if(objectSerialPort->isOpen()){
        USB=1;
        qDebug("Yhdistetty");
    }
    else{
USB=0;
qDebug("Ei yhdistetty");
}

}

void DLLRFID::printSerial()
{
    if(objectSerialPort->readLine()!=">"){
           stringSerial=objectSerialPort->readLine();
        }
}
