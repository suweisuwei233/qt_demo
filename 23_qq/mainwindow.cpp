#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qqitem.h"
#include "QListWidgetItem"
class QQItem;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QQItem *qqItem = new QQItem(":/icon/person.png",true,"测试1");
    QQItem *qqItem1 = new QQItem(":/icon/person.png",true,"测试2");
    QQItem *qqItem2 = new QQItem(":/icon/person.png",true,"测试3");
    QQItem *qqItem3 = new QQItem(":/icon/person.png",true,"测试4");
    QListWidgetItem *item0 =  new QListWidgetItem;
    QListWidgetItem *item1 =  new QListWidgetItem;
    QListWidgetItem *item2 =  new QListWidgetItem;
    QListWidgetItem *item3 =  new QListWidgetItem;
    ui->listWidget->addItem(item0);
    ui->listWidget->addItem(item1);
    ui->listWidget->addItem(item2);
    ui->listWidget->addItem(item3);
    ui->listWidget->setItemWidget(item0,qqItem);
    ui->listWidget->setItemWidget(item1,qqItem1);
    ui->listWidget->setItemWidget(item2,qqItem2);
    ui->listWidget->setItemWidget(item3,qqItem3);
}

MainWindow::~MainWindow()
{
    delete ui;
}

