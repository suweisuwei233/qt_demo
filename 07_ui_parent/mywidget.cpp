#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    pushButton = new QPushButton(this);
    //qt的对象树机制就是为了方便管理内存
    demoWidget = new DemoWidget(this);
    //也可以使用obj.setParent(this)

}

MyWidget::~MyWidget()
{
}

