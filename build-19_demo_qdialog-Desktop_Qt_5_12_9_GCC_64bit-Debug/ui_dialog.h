/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFrame *frame;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(402, 202);
        Dialog->setStyleSheet(QString::fromUtf8("QDialog{\n"
"\n"
"}"));
        frame = new QFrame(Dialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 402, 202));
        frame->setMinimumSize(QSize(400, 200));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color:#fff;\n"
"	border-radius:20px;\n"
"	border:1px solid black;	\n"
"	padding:5px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 401, 201));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border:none;"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(300, 45));
        QFont font1;
        font1.setPointSize(20);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border:1px solid #eee;\n"
"	border-radius:10px;\n"
"}"));
        lineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(197, 60));
        pushButton_2->setMaximumSize(QSize(1000, 1000));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#fff;\n"
"	color:#2a5caa;\n"
"	border-top:1px solid #eee;\n"
"	border-bottom-left-radius:20px;\n"
"	border-left:1px solid black;\n"
"	border-right:1px solid #eee;\n"
"}\n"
"QPushButton:hover{\n"
"		background-color:grey;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(197, 60));
        pushButton->setMaximumSize(QSize(1000, 1000));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#fff;\n"
"	color:#2a5caa;\n"
"		border-bottom-right-radius:20px;\n"
"	border-top:1px solid #eee;\n"
"}\n"
"QPushButton:hover{\n"
"		background-color:grey;\n"
"\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "\350\257\267\350\276\223\345\205\245\346\224\257\344\273\230\345\257\206\347\240\201", nullptr));
        lineEdit->setText(QApplication::translate("Dialog", "1231", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
