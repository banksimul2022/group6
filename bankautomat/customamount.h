#ifndef CUSTOMAMOUNT_H
#define CUSTOMAMOUNT_H


#include <QDialog>


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

private:
    Ui::customamount *ui;
    QString perkele;

};

#endif // CUSTOMAMOUNT_H
