#ifndef DRAWMONEYCUSTOM_H
#define DRAWMONEYCUSTOM_H

#include <QDialog>

namespace Ui {
class DrawMoneyCustom;
}

class DrawMoneyCustom : public QDialog
{
    Q_OBJECT

public:
    explicit DrawMoneyCustom(QWidget *parent = nullptr);
    ~DrawMoneyCustom();

signals:
    void customAmountSignal(QString);

private slots:
    void on_btn_confirmCustomAmount_clicked();

private:
    Ui::DrawMoneyCustom *ui;
    QString customAmount;
};

#endif // DRAWMONEYCUSTOM_H
