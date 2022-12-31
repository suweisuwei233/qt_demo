#ifndef SCHOOL_H
#define SCHOOL_H

#include <QObject>

class School : public QObject
{
    Q_OBJECT
public:
    explicit School(QObject *parent = nullptr);

signals:
    //自定义信号关键字 qt信号的关键字只用生命不用定义
    void sendMessages();
};

#endif // SCHOOL_H
