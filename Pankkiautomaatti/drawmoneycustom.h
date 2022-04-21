#ifndef DRAWMONEYCUSTOM_H
#define DRAWMONEYCUSTOM_H

#include <QDialog>
#include <QDebug>
#include <QTimer>

namespace Ui {
class DrawMoneyCustom;
}

class DrawMoneyCustom : public QDialog
{
    Q_OBJECT

public:
    explicit DrawMoneyCustom(QWidget *parent = nullptr);
    ~DrawMoneyCustom();

public slots:
    void startCustomTimer();
    void customIdleSlot();

signals:
    void customAmountSignal(QString);
    void drawMoneyTimerSignal();

private slots:
    void on_btn_confirmCustomAmount_clicked();

private:
    Ui::DrawMoneyCustom *ui;
    QString customAmount;
    QTimer *timer;
};

#endif // DRAWMONEYCUSTOM_H
