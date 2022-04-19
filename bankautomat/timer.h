#ifndef TIMER_H
#define TIMER_H

#include <QObject>
#include <QTimer>
#include "customamount.h"
#include "ui_customamount.h"
#include "drawmoney.h"
#include "ui_drawmoney.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
class timer: public QObject
{
    Q_OBJECT
public:
    timer(QObject *parent=nullptr);
    int mainAika=0;
    int drawAika=0;
    int customAika=0;
private:
    QTimer *Timer;

private slots:
    void timerFunction();
};

#endif // TIMER_H
