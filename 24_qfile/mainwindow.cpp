#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtDebug"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //文档读写的流程
    //1.打开文件 QFileDialog

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,"选择文本","/home/suweisuwie/c++/24_qfile");
    qDebug() << filename <<endl;
    //"/home/suweisuwie/c++/24_qfile/main.cpp"
    file.setFileName(filename);
    //open
    if(!file.open(QIODevice::ReadWrite)){
        qDebug() << "open filed" << endl;
        return;
    }
    //自动装换类型 QString函数自动转换
    ui->textEdit->setText(file.readAll());
    //close file
    file.close();
}

void MainWindow::on_pushButton_2_clicked()
{
    if(file.fileName().isEmpty()){
        return;
    }
    //打开文件
    if(!file.open(QIODevice::ReadWrite)){
        qDebug() << "close filed" << endl;
        return;
    }
    //写入内容
    file.write(ui->textEdit->toPlainText().toUtf8());
    //关闭并保存
    file.close();
    ui->textEdit->clear();
}
