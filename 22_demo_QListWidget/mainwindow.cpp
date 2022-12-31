#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //添加项
    ui->listWidget->addItem("demo1");
    ui->listWidget->addItem("demo2");
    ui->listWidget->addItem("demo3");
    //删除项
    ui->listWidget->takeItem(0);
    //插入项 从项前面插入
    ui->listWidget->insertItem(0,"insert_obj");

}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
       qDebug() << currentRow << endl;
       qDebug() << ui->listWidget->item(currentRow)->text() << endl;
}

