#include "timer.h"

timer::timer(QObject *parent) : QObject(parent)
{
    Timer = new QTimer;
    connect(Timer, SIGNAL(timeout()),
            this,SLOT(backToMain()));
}

void timer::timerFunction()
{

}
