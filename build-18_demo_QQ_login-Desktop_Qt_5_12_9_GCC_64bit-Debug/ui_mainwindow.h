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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QWidget *widget_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(816, 569);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:#fff;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 133, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(81, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        widget = new QWidget(widget_4);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(600, 200));
        widget->setMaximumSize(QSize(600, 200));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 60));
        lineEdit_2->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setPointSize(26);
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border:none;\n"
"}"));

        horizontalLayout->addWidget(lineEdit_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setMinimumSize(QSize(40, 40));
        pushButton->setMaximumSize(QSize(40, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	image:url(:/icon/pulldown.png);\n"
"	border-radius:20px;\n"
"	border:1px solid #eeeeee;\n"
"}"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 5));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border-bottom:2px solid gray;\n"
"}"));

        verticalLayout->addWidget(widget_2);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(0, 60));
        lineEdit_3->setMaximumSize(QSize(16777215, 60));
        lineEdit_3->setFont(font);
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border:none;\n"
"}"));
        lineEdit_3->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_3);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setMinimumSize(QSize(40, 40));
        pushButton_2->setMaximumSize(QSize(40, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	image:url(:/icon/pulldown.png);\n"
"	border-radius:20px;\n"
"	border:1px solid #eeeeee;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMaximumSize(QSize(16777215, 5));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border-bottom:2px solid gray;\n"
"}"));

        verticalLayout_2->addWidget(widget_3);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_3->addWidget(widget);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_4->addWidget(widget_4);

        verticalSpacer_2 = new QSpacerItem(20, 132, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 816, 28));
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
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "QQ\345\217\267\347\240\201/\346\211\213\346\234\272/\351\202\256\347\256\261", nullptr));
        pushButton->setText(QString());
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
