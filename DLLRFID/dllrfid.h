#ifndef DLLRFID_H
#define DLLRFID_H
#include <QSerialPort>
#include "DLLRFID_global.h"

class DLLRFID_EXPORT DLLRFID
{
public:
    DLLRFID();
    void printSerial();
    QString stringSerial;
    int USB;
    void USBCheck();
    void Alustus();
    ~DLLRFID();
private:
    QSerialPort *objectSerialPort;
    QIODevice *objectIODevice;

};

#endif // DLLRFID_H
