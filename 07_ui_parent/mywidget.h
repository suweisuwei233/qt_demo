#ifndef MYWIDGET_H
#define MYWIDGET_H
#include "QPushButton"
#include <QWidget>
#include "demowidget.h"
class DemoWidget;
class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();
    QPushButton *pushButton;
    DemoWidget *demoWidget;
};
#endif // MYWIDGET_H
