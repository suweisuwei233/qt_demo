#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->centralwidget->setLayout(ui->horizontalLayout_2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

