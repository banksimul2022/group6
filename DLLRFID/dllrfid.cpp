#include "dllrfid.h"
#include <QSerialPort>
#include <QDebug>


DLLRFID::DLLRFID()
{
    objectSerialPort=new QSerialPort;
    objectSerialPort->setBaudRate(9600);
    objectSerialPort->setPortName("COM3");
    objectSerialPort->open(QIODevice::ReadOnly);
}
void DLLRFID::printSerial()
{
    stringSerial=objectSerialPort->readAll();
}
