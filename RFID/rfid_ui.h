#ifndef RFID_UI_H
#define RFID_UI_H
#include "rfid.h"
#include <QWidget>

namespace Ui {
class rfid_ui;
}

class rfid_ui : public QWidget
{
    Q_OBJECT

public:
    rfid_ui(QWidget *parent = nullptr);
    ~rfid_ui();

private:
    Ui::rfid_ui *ui;
};

#endif // RFID_UI_H
