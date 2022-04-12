#ifndef DLLPINCODE_H
#define DLLPINCODE_H

#include "DLL-pincode_global.h"
#include <QObject>
#include <QDebug>
#include "pincode.h"

class DLLPINCODE_EXPORT DLLpincode : public QObject
{
    Q_OBJECT

public:
    DLLpincode(QObject *parent = nullptr);
    ~DLLpincode();

    void showPincodeUI();
    void closePincodeUI();
    void getPincode();
    QString pincode;

public slots:
    void pincodeSlot();

signals:
    void signalPincode(QString);

private:
   Pincode *objPincode;




};

#endif // DLLPINCODE_H
