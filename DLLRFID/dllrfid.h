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
private:
    QSerialPort *objectSerialPort;

};

#endif // DLLRFID_H
