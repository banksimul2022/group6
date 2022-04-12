#include "pincode.h"
#include "ui_pincode.h"

Pincode::Pincode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pincode)
{
    ui->setupUi(this);

}

Pincode::~Pincode()
{
    delete ui;
}

QString Pincode::returnPincode()
{
    return stringPincode;
}

void Pincode::on_BTN_1_clicked()
{
    stringPincode.append("1");
    stringstar.append("*");
    ui->le_Pincode->setText(stringstar);
}


void Pincode::on_BTN_2_clicked()
{
    stringPincode.append("2");
    stringstar.append("*");
    ui->le_Pincode->setText(stringstar);
}


void Pincode::on_BTN_3_clicked()
{
    stringPincode.append("3");
    stringstar.append("*");
    ui->le_Pincode->setText(stringstar);
}


void Pincode::on_BTN_4_clicked()
{
    stringPincode.append("4");
    stringstar.append("*");
    ui->le_Pincode->setText(stringstar);
}


void Pincode::on_BTN_5_clicked()
{
    stringPincode.append("5");
    stringstar.append("*");
    ui->le_Pincode->setText(stringstar);
}


void Pincode::on_BTN_6_clicked()
{
    stringPincode.append("6");
    stringstar.append("*");
    ui->le_Pincode->setText(stringstar);
}


void Pincode::on_BTN_7_clicked()
{
    stringPincode.append("7");
    stringstar.append("*");
    ui->le_Pincode->setText(stringstar);
}


void Pincode::on_BTN_8_clicked()
{
    stringPincode.append("8");
    stringstar.append("*");
    ui->le_Pincode->setText(stringstar);
}


void Pincode::on_BTN_9_clicked()
{
    stringPincode.append("9");
    stringstar.append("*");
    ui->le_Pincode->setText(stringstar);
}


void Pincode::on_BTN_0_clicked()
{
    stringPincode.append("0");
    stringstar.append("*");
    ui->le_Pincode->setText(stringstar);
}


void Pincode::on_BTN_clear_clicked()
{
    stringstar="";
    stringPincode="";
    ui->le_Pincode->setText(stringstar);
}


void Pincode::on_BTN_ok_clicked()
{
   qDebug() << "ok CLICKED pin DLL"<< stringPincode;
   if(stringPincode.length() > 4) {
       ui->le_Pincode->setText("Try again");
   }
   else {
   //ui->le_Pincode->setText(stringPincode);
   emit pincodeFromUI();
   }


}

