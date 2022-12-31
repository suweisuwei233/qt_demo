

#include "mainwindow.h"
#include "QDir"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDir::setCurrent(QApplication::applicationDirPath());
    MainWindow w;
    w.show();
    return a.exec();
}
