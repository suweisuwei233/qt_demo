#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newfiledialog.h"
#include "QDateTime"
#include <QFile>
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QFile file;
    file.setFileName(QDateTime::currentDateTime().toString("yyyy_MM_dd_hh_mm_ss") + ".txt");
    file.open(QIODevice::ReadWrite);

    NewFileDialog *dialog = new NewFileDialog(this);
    dialog->show();
    dialog->resize(this->size());
    dialog->setModal(true);
    dialog->exec();
    //写入
    qDebug() <<"开始写入文件" << endl;
    QString temp = dialog->getTextEditContent();
    file.write(temp.toUtf8());
    if(temp.length() == 0){
        file.remove();
        qDebug() << "文件内容为空 文件将被删除" << endl;
    }
    file.close();
    //释放
    delete dialog;
}
