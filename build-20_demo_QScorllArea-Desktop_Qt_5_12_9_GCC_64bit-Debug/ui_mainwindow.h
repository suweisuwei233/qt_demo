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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QCheckBox *checkBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(250, 0, 551, 601));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollBar:vertical {\n"
"    width:20px;\n"
"	background-color:#fff;\n"
" }\n"
"QScrollBar::handle:vertical {\n"
"     background: rgba(200,200,200,50%);\n"
"	border-radius:10px;\n"
" }\n"
"QScrollBar::handle:vertical:hover{\n"
"     background: rgba(200,200,200,80%);\n"
"	border-radius:10px;\n"
" }\n"
"QScrollBar::add-line:vertical {\n"
"	width:0px;\n"
"height:0px;\n"
" }\n"
"\n"
" QScrollBar::sub-line:vertical {\n"
"	width:0px;\n"
"height:0px;\n"
" }\n"
"QWidget{\n"
"background-color:#fff;\n"
"}"));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 529, 800));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 800));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 30, 67, 17));
        checkBox = new QCheckBox(scrollAreaWidgetContents);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(170, 30, 181, 21));
        scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "\345\274\200\346\234\272\346\227\266\350\207\252\345\212\250\345\220\257\345\212\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
