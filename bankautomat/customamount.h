#ifndef CUSTOMAMOUNT_H
#define CUSTOMAMOUNT_H
#include <QDialog>
#include "dllrestapi.h"
#include <QTimer>


class drawMoney;

namespace Ui {
class customamount;
}

class customamount : public QDialog
{
    Q_OBJECT

public:
    explicit customamount(QWidget *parent = nullptr);
    ~customamount();

public slots:
    void kiinni();
    void ajastin();


private slots:
    void on_BTN_draw_clicked();
    void resetTimer();
signals:
    void sendText(QString);
    void startAjastin();

private:
    Ui::customamount *ui;
    QString custom;
    QTimer *timer;
    int aika=0;

};

#endif // CUSTOMAMOUNT_H
