#include "rfid.h"
#include <QSerialPort>
#include <QDebug>
#include <QTimer>
RFID::RFID()
{
    qDebug("RFID main");
}

void  RFID::USB_Alustus()
{
    qDebug("alustetaan");
    ObjectSerialPort=new QSerialPort();
    ObjectSerialPort->setPortName("COM3");
    ObjectSerialPort->setBaudRate(9600);
    ObjectSerialPort->open(QIODevice::ReadOnly);
    if(ObjectSerialPort->isOpen()){
        qDebug("USB ALUSTETTU!");
    }
}
void RFID::Luku()
{
    Read = ObjectSerialPort->readLine();
    qDebug("LUKU");
    if(!Read.contains(">")){
      if(Read != "\r\n"){
          if(!Read.isEmpty()){
              Read.remove(10,15);Read.remove(0,6);
              printLine = Read;
              qDebug() << "print" << printLine;
              card=1;
              //emit signalRFIDcard(printLine);
          }
      }
    }
}
void RFID::Print()
{
    ObjectSerialPort->waitForReadyRead(1000);
    cardnumber = ObjectSerialPort->readLine();
    qDebug() << cardnumber;
    //emit signalRFIDcard(cardnumber);
}

QString RFID::returnCardNumber()
{
    return printLine;
}
void RFID::timerfunction()
{
    qDebug() << "update";
    RFID::Luku();
}
