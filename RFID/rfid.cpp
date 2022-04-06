#include "rfid.h"
#include <QSerialPort>
#include <QDebug>
#include <QTimer>
#include "rfid_ui.h"
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
      if(!Read.isEmpty()){
          printLine = Read;
          printLine.remove(10,15);printLine.remove(0,6);
          qDebug() << "print" << printLine;
      }

      //RFID::Print();
    }
}
void RFID::Print()
{
}

void RFID::show()
{
  rfid_ui *w;
  w= new rfid_ui;
  w->show();
  //this->show();
}
void RFID::timerfunction()
{
    qDebug() << "update";
    RFID::Luku();
}
