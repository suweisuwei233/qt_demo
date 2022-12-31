#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    school = new School(this);
    student = new Student(this);
    connect(school,SIGNAL(sendMessages()),student,SLOT(comeBackToClass()));
    //qt发射信号的关键字
    //在qt中一个信号可以连接多个槽
    connect(school,SIGNAL(sendMessages()),student,SLOT(hide()));
    //多个信号可以链接通过一个槽
    //connect(school,SIGNAL(sendMessages2()),student,SLOT(hide()));
    //一个信号可以链接另一个信号
    //connect(school,SIGNAL(),student,SIGNAL());
    emit school -> sendMessages();
}

MainWindow::~MainWindow()
{
    delete ui;
}

