#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
       qDebug() << "this is state" << arg1 <<endl;
}

void MainWindow::on_checkBox_2_stateChanged(int arg1)
{

}
