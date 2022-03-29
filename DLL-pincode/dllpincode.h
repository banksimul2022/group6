#ifndef DLLPINCODE_H
#define DLLPINCODE_H
#include <QDebug>
#include "pincode.h"

#include "DLL-pincode_global.h"

class DLLPINCODE_EXPORT DLLpincode
{
public:
    DLLpincode();
    void NaytaPinkoodi();
private:
   Pincode *objectpincode;
};

#endif // DLLPINCODE_H
