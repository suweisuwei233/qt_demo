#include "qqitem.h"
#include "ui_qqitem.h"

QQItem::QQItem(QString icon,bool flag,QString name,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QQItem)
{
    ui->setupUi(this);
    QImage image(icon);
    ui->icon->setPixmap(QPixmap::fromImage(image.scaled(ui->icon->width(),ui->icon->height())));
    QImage image1(":/icon/on.png");
    ui->phone->setPixmap(QPixmap::fromImage(image1.scaled(ui->phone->width(),ui->phone->height())));
    ui->phone->setVisible(flag);
    ui->name->setText(name);
}

QQItem::~QQItem()
{
    delete ui;
}
