#ifndef DEMOWIDGET_H
#define DEMOWIDGET_H

#include <QWidget>

class DemoWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DemoWidget(QWidget *parent = nullptr);
    ~DemoWidget();
signals:

};

#endif // DEMOWIDGET_H
