#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //也可以使用代码去修改样式
    ui->label_2->setStyleSheet("QLabel{background-color:black;}");
    //给组件修改名字
    ui->label_3->setObjectName("label_3");
}

MainWindow::~MainWindow()
{
    delete ui;
}

