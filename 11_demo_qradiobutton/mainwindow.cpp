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


void MainWindow::on_radioButton_toggled(bool checked)
{
        qDebug() << "男性别状态" << checked <<endl;
}

void MainWindow::on_radioButton_2_toggled(bool checked)
{
    qDebug() << "女性别状态" << checked <<endl;
}
