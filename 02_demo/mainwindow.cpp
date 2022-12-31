#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<< "构造函数执行了"<< endl;
}

MainWindow::~MainWindow()
{
    qDebug()<< "析构函数执行了"<< endl;
    delete ui;
}

