#ifndef RFID_H
#define RFID_H
#include <QSerialPort>

#include "RFID_global.h"

class RFID_EXPORT RFID
{
public:
    RFID();
    void Luku();
    void USB_Alustus();
    void Print();
    QSerialPort *ObjectSerialPort;
    void show();
    QString printLine;
public slots:
    void timerfunction();
private:
    QString Read;
};

#endif // RFID_H
