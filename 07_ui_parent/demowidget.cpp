#include "demowidget.h"
#include "QDebug"
DemoWidget::DemoWidget(QWidget *parent) : QWidget(parent)
{

}

DemoWidget::~DemoWidget()
{
    qDebug() << "析构函数执行了" <<endl;
}
