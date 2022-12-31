#include "mainwindow.h"

#include <QApplication>
#include "QFile"
void LoadQss(){
    QFile file(":/style.qss");
    if(file.exists()){
        file.open(QFile::ReadOnly);
        QString styleSheet = QLatin1String(file.readAll());
        qApp->setStyleSheet(styleSheet);
        file.close();
    }
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoadQss();
    MainWindow w;
    w.show();
    return a.exec();
}
