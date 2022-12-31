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
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(170, 140, 112, 50));
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(170, 200, 112, 50));
        radioButton_3 = new QRadioButton(centralwidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->setExclusive(false);
        buttonGroup->addButton(radioButton_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(450, 140, 112, 50));
        radioButton_4 = new QRadioButton(centralwidget);
        buttonGroup->addButton(radioButton_4);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(450, 200, 112, 50));
        radioButton_5 = new QRadioButton(centralwidget);
        buttonGroup->addButton(radioButton_5);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(450, 260, 112, 50));
        radioButton_6 = new QRadioButton(centralwidget);
        buttonGroup->addButton(radioButton_6);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(450, 330, 112, 50));
        pushButton = new QPushButton(centralwidget);
        buttonGroup_2 = new QButtonGroup(MainWindow);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->setExclusive(false);
        buttonGroup_2->addButton(pushButton);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 330, 101, 51));
        pushButton->setCheckable(true);
        pushButton_2 = new QPushButton(centralwidget);
        buttonGroup_2->addButton(pushButton_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 400, 101, 51));
        pushButton_2->setCheckable(true);
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
        radioButton->setText(QApplication::translate("MainWindow", "\347\224\267", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "\345\245\263", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "\350\257\255\346\226\207", nullptr));
        radioButton_4->setText(QApplication::translate("MainWindow", "\346\225\260\345\255\246", nullptr));
        radioButton_5->setText(QApplication::translate("MainWindow", "\350\213\261\350\257\255", nullptr));
        radioButton_6->setText(QApplication::translate("MainWindow", "\345\234\260\347\220\206", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "12", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "13", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
