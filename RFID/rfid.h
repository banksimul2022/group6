#ifndef RFID_H
#define RFID_H
#include <QSerialPort>
#include <QObject>
#include "RFID_global.h"

class RFID_EXPORT RFID
{
public:
    RFID();
    void Luku();
    void USB_Alustus();
    void Print();
    QSerialPort *ObjectSerialPort;
    QString printLine;
    int card=0;
    QString returnCardNumber();
signals:
    void signalRFIDcard(QString);
public slots:
    void timerfunction();

private:
    QString Read;
    QString cardnumber;
};

#endif // RFID_H
