/********************************************************************************
** Form generated from reading UI file 'findcrap.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDCRAP_H
#define UI_FINDCRAP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_findcrap
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *findcrap)
    {
        if (findcrap->objectName().isEmpty())
            findcrap->setObjectName(QString::fromUtf8("findcrap"));
        findcrap->resize(400, 300);
        verticalLayout = new QVBoxLayout(findcrap);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(findcrap);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(findcrap);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(findcrap);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(findcrap);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(findcrap);

        QMetaObject::connectSlotsByName(findcrap);
    } // setupUi

    void retranslateUi(QWidget *findcrap)
    {
        findcrap->setWindowTitle(QApplication::translate("findcrap", "findcrap", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("findcrap", "Look for:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("findcrap", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class findcrap: public Ui_findcrap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDCRAP_H
