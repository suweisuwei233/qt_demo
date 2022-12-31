#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //设置无边框
    setWindowFlag(Qt::FramelessWindowHint);
    //设置透明
    setAttribute(Qt::WA_TranslucentBackground);

    //设置具体阴影
    QGraphicsDropShadowEffect *shadow_effect = new QGraphicsDropShadowEffect(this);
    shadow_effect->setOffset(0, 0);
    //阴影颜色
    shadow_effect->setColor(QColor(38, 78, 119, 127));
    //阴影半径
    shadow_effect->setBlurRadius(5);
    ui->frame->setGraphicsEffect(shadow_effect);
}

Dialog::~Dialog()
{
    delete ui;
}

