#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //这里也可以直接删掉 QObject::
    QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

