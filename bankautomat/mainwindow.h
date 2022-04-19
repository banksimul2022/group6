#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "drawmoney.h"
#include "dllrestapi.h"
#include <QTimer>
#include "dllpincode.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_accbalance_clicked();

    void on_AccActions_clicked();

    void on_prevAction_clicked();

    void on_nextAction_clicked();

    void on_draw_clicked();

    void on_close_clicked();

    void buttonClicked();

    void on_BTN_pincode_clicked();

public slots:
    void recvBalance(double b);
    void recvBalanceDLL(QString);
    void RecvActions(QString);
    void RecvName(QString);
    void backToSignin();
    void aloitaTaika();


signals:
    void drawTimer();



private:
    Ui::MainWindow *ui;
    drawMoney * pdrawMoney;
    double Balance;
    DLLRestApi *OBJrestApi;
    QString DLLbalance;
    drawMoney * OBJdrawMoney;
    QString Actions;
    QString Name;
    QString OwnerID;
    QTimer *timer;
    DLLpincode *objpincode;
    int aika=0;


};
#endif // MAINWINDOW_H
