#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pdrawMoney = new drawMoney;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pdrawMoney;
}


void MainWindow::on_accbalance_clicked()
{

}


void MainWindow::on_AccActions_clicked()
{

}


void MainWindow::on_prevAction_clicked()
{

}


void MainWindow::on_nextAction_clicked()
{

}


void MainWindow::on_draw_clicked()
{
    pdrawMoney->show();
}


void MainWindow::on_close_clicked()
{
    this->close();
}

