#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置可以选中
    //这个属性添加上之后 当前设置的这个按钮就不会弹起来了 就会出现两种情况并且暂停在当前的情况下
    ui->pushButton->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    qDebug() << "clicked" <<endl;
}

void MainWindow::on_pushButton_pressed()
{
    qDebug() << "pressed" <<endl;
}

void MainWindow::on_pushButton_released()
{
    qDebug() << "released" <<endl;
}

void MainWindow::on_pushButton_toggled(bool checked)
{
    qDebug() << "toggled"<< checked <<endl;

}
