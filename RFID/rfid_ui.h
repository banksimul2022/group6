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
public slots:
    void rfidSlot();
signals:
    void cardNumberExe(QString);
private:
    Ui::rfid_ui *ui;
    QString cardnumber;
    RFID *objRFID;
};

#endif // RFID_UI_H
