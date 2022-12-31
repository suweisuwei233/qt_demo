/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSplitter *splitter;
    QWidget *widget;
    QWidget *widget_2;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setStyleSheet(QString::fromUtf8("QSplitter{\n"
"	background-color:black;\n"
"}"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(false);
        splitter->setHandleWidth(10);
        splitter->setChildrenCollapsible(false);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:red;\n"
"}"));
        splitter->addWidget(widget);
        widget_2 = new QWidget(splitter);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(40, 0));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:yellow;\n"
"}"));
        splitter->addWidget(widget_2);

        verticalLayout->addWidget(splitter);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\344\272\206\351\273\204\350\211\262\351\203\250\345\210\206\347\232\204\346\234\200\345\260\217\345\256\275\345\272\246\344\270\27230px", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "childrentCollapsible \344\270\272true\346\227\266\345\200\231\350\241\250\347\244\272 \345\217\257\344\273\245\345\260\206\345\255\220\351\203\250\344\273\266\350\260\203\346\225\264\344\270\2720", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
