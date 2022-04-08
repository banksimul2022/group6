#ifndef CUSTOMAMOUNT_H
#define CUSTOMAMOUNT_H
#include <QDialog>
#include "dllrestapi.h"


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

private slots:
    void on_BTN_draw_clicked();
signals:
    void sendText(QString);

private:
    Ui::customamount *ui;
    QString custom;

};

#endif // CUSTOMAMOUNT_H
