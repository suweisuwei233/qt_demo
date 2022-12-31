#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

signals:

public slots:
    //自定义槽函数 槽函数不仅需要声明还需要定义
    void comeBackToClass();
};

#endif // STUDENT_H
