#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    pushButton = new QPushButton(this);
    pushButton->setText("我的是按钮");
    pushButton->setGeometry(50,150,100,50);
    //修改MainWindow的大小
    this->resize(800,480);
//    pushButton->show();


}

MainWindow::~MainWindow()
{
}

