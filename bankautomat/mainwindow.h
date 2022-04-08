#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "drawmoney.h"
#include "dllrestapi.h"


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
public slots:
    void recvBalance(double b);
    void recvBalanceDLL(QString);
    void RecvActions(QString);
    void RecvName(QString);


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


};
#endif // MAINWINDOW_H
