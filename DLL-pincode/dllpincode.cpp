#include "dllpincode.h"
#include "ui_pincode.h"


DLLpincode::DLLpincode()
{
}

void DLLpincode::NaytaPinkoodi()
{
    objectpincode=new Pincode;
    objectpincode->exec();
    objectpincode->show();

}
