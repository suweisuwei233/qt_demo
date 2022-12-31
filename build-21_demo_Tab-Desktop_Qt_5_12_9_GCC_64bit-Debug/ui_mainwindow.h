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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setDocumentMode(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(centralwidget);
        QFont font;
        font.setPointSize(18);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setFont(font);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setFont(font);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setFocusPolicy(Qt::NoFocus);
        listWidget->setStyleSheet(QString::fromUtf8("QListView {\n"
"    \n"
"	background-color:#dddddd;\n"
"border:none;\n"
" }\n"
"QListView::item {\n"
"height:50px;\n"
"}\n"
"\n"
"QListView::item:selected{\n"
"background-color:#fff;\n"
"color:black;\n"
"}"));

        horizontalLayout->addWidget(listWidget);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget{\n"
"	border:none;\n"
"}\n"
"QTabBar::tab {\n"
"width:0px;\n"
"height:0px;\n"
"}"));
        tabWidget->setTabsClosable(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setStyleSheet(QString::fromUtf8("background-color:red;"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setStyleSheet(QString::fromUtf8("background-color:blue;"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tab_3->setStyleSheet(QString::fromUtf8("background-color:orange;"));
        tabWidget->addTab(tab_3, QString());

        horizontalLayout->addWidget(tabWidget);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 5);

        horizontalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "\347\212\266\346\200\201", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "\344\274\232\350\257\235\347\252\227\345\217\243", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\346\240\207\347\255\276\344\270\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
