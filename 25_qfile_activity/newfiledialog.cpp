#include "newfiledialog.h"
#include "ui_newfiledialog.h"
#include "QDebug"

NewFileDialog::NewFileDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewFileDialog)
{
    ui->setupUi(this);
}

NewFileDialog::~NewFileDialog()
{
    delete ui;
}

QString NewFileDialog::getTextEditContent()
{
    return ui->textEdit->toPlainText();
}

void NewFileDialog::on_pushButton_pressed()
{
    ui->pushButton->setIcon(QIcon(":/icon/return.png"));
    qDebug() << "pressed" <<endl;
}

void NewFileDialog::on_pushButton_released()
{
    ui->pushButton->setIcon(QIcon(":/icon/return.png"));
    qDebug() << "released" <<endl;
}

void NewFileDialog::on_pushButton_clicked()
{
    this->close();
}
