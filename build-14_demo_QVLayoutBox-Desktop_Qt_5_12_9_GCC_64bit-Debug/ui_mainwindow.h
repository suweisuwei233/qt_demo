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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 711, 451));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pushButton_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 3);

        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout->addWidget(pushButton_6);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        verticalLayout_2->addWidget(pushButton_9);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout_2->addWidget(pushButton_7);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(verticalLayout_3);

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
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
