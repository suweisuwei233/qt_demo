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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QListWidget *listWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(350, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(40, 40));
        pushButton->setMaximumSize(QSize(40, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"image:url(:/icon/search.png);\n"
"}"));

        horizontalLayout->addWidget(pushButton);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 40));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setFocusPolicy(Qt::NoFocus);
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget::item{\n"
"height:65px;\n"
"}\n"
"QListWidget::item:selected{\n"
"height:65px;\n"
"background-color:rgb(211, 215, 207);\n"
"}\n"
"QListWidget::item:hover{\n"
"height:65px;\n"
"background-color:rgb(136, 138, 133);\n"
"}"));

        verticalLayout->addWidget(listWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\347\276\244\346\210\220\345\221\230\357\274\210659/1235\357\274\211", nullptr));
        pushButton->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
