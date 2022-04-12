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
signals:
    void sendText(QString);
    void sendTimer();
    void startAjastin();

private:
    Ui::customamount *ui;
    QString custom;
    QTimer *timer;

};

#endif // CUSTOMAMOUNT_H
