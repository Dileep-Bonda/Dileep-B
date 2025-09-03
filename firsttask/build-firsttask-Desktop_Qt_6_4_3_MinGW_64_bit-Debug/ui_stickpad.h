/********************************************************************************
** Form generated from reading UI file 'stickpad.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STICKPAD_H
#define UI_STICKPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Stickpad
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *Stickpad)
    {
        if (Stickpad->objectName().isEmpty())
            Stickpad->setObjectName("Stickpad");
        Stickpad->resize(375, 255);
        gridLayout = new QGridLayout(Stickpad);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(Stickpad);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        pushButton = new QPushButton(Stickpad);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Stickpad);

        QMetaObject::connectSlotsByName(Stickpad);
    } // setupUi

    void retranslateUi(QDialog *Stickpad)
    {
        Stickpad->setWindowTitle(QCoreApplication::translate("Stickpad", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Stickpad", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Stickpad: public Ui_Stickpad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STICKPAD_H
