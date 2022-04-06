#include "rfid_ui.h"
#include "ui_rfid_ui.h"
#include "rfid.h"

rfid_ui::rfid_ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::rfid_ui)
{
    ui->setupUi(this);
}

rfid_ui::~rfid_ui()
{
    delete ui;
}
