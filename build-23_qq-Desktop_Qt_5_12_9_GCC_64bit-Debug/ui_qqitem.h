/********************************************************************************
** Form generated from reading UI file 'qqitem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQITEM_H
#define UI_QQITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QQItem
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *widget1;
    QLabel *icon;
    QLabel *phone;
    QLabel *name;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *QQItem)
    {
        if (QQItem->objectName().isEmpty())
            QQItem->setObjectName(QString::fromUtf8("QQItem"));
        QQItem->resize(350, 65);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QQItem->sizePolicy().hasHeightForWidth());
        QQItem->setSizePolicy(sizePolicy);
        QQItem->setMinimumSize(QSize(350, 65));
        QQItem->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(QQItem);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-1, -1, 351, 71));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setMinimumSize(QSize(48, 48));
        widget1->setMaximumSize(QSize(48, 48));
        icon = new QLabel(widget1);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setGeometry(QRect(0, 0, 48, 48));
        icon->setMinimumSize(QSize(48, 48));
        icon->setStyleSheet(QString::fromUtf8("background-color:#eee;"));
        phone = new QLabel(widget1);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setGeometry(QRect(30, 30, 20, 20));
        phone->setStyleSheet(QString::fromUtf8("background-color:rgba(191, 64, 64, 0);"));

        horizontalLayout->addWidget(widget1);

        name = new QLabel(widget);
        name->setObjectName(QString::fromUtf8("name"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy1);
        name->setMinimumSize(QSize(48, 0));
        QFont font;
        name->setFont(font);
        name->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:darkgray;\n"
"	font-size:20px;\n"
"padding-left:20px;\n"
"}"));

        horizontalLayout->addWidget(name);

        horizontalSpacer_2 = new QSpacerItem(18, 38, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(QQItem);

        QMetaObject::connectSlotsByName(QQItem);
    } // setupUi

    void retranslateUi(QWidget *QQItem)
    {
        QQItem->setWindowTitle(QApplication::translate("QQItem", "Form", nullptr));
        icon->setText(QString());
        phone->setText(QString());
        name->setText(QApplication::translate("QQItem", "test1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QQItem: public Ui_QQItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQITEM_H
