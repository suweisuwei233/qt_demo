/********************************************************************************
** Form generated from reading UI file 'newfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFILEDIALOG_H
#define UI_NEWFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewFileDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *textEdit;

    void setupUi(QDialog *NewFileDialog)
    {
        if (NewFileDialog->objectName().isEmpty())
            NewFileDialog->setObjectName(QString::fromUtf8("NewFileDialog"));
        NewFileDialog->resize(739, 510);
        verticalLayout = new QVBoxLayout(NewFileDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 18, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(NewFileDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(120, 48));
        pushButton->setMaximumSize(QSize(120, 48));
        QFont font;
        font.setPointSize(20);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton::icon{\n"
"\n"
"}\n"
"QPushButton{\n"
"border:none;\n"
"color:#f4ea2a;\n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/return.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(NewFileDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(NewFileDialog);

        QMetaObject::connectSlotsByName(NewFileDialog);
    } // setupUi

    void retranslateUi(QDialog *NewFileDialog)
    {
        NewFileDialog->setWindowTitle(QApplication::translate("NewFileDialog", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("NewFileDialog", "\346\226\207\344\273\266\345\244\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewFileDialog: public Ui_NewFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFILEDIALOG_H
