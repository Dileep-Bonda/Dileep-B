/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotePad
{
public:
    QAction *action_New;
    QAction *action_Open;
    QAction *action_Save;
    QAction *action_Saveas;
    QAction *action_Undo;
    QAction *action_Cut;
    QAction *action_Copy;
    QAction *action_Paste;
    QAction *action_REdo;
    QAction *action_Delete;
    QAction *action_About;
    QAction *action_Exit;
    QAction *action_Style;
    QAction *action_Fontcolor;
    QAction *action_New_window;
    QAction *action_table;
    QAction *action_stickpad;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Edit;
    QMenu *menu_About;
    QMenu *menu_Font;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *NotePad)
    {
        if (NotePad->objectName().isEmpty())
            NotePad->setObjectName("NotePad");
        NotePad->resize(641, 380);
        action_New = new QAction(NotePad);
        action_New->setObjectName("action_New");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_New->setIcon(icon);
        action_Open = new QAction(NotePad);
        action_Open->setObjectName("action_Open");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open->setIcon(icon1);
        action_Save = new QAction(NotePad);
        action_Save->setObjectName("action_Save");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon2);
        action_Saveas = new QAction(NotePad);
        action_Saveas->setObjectName("action_Saveas");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icons/icons/save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Saveas->setIcon(icon3);
        action_Undo = new QAction(NotePad);
        action_Undo->setObjectName("action_Undo");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/icons/icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Undo->setIcon(icon4);
        action_Cut = new QAction(NotePad);
        action_Cut->setObjectName("action_Cut");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/icons/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Cut->setIcon(icon5);
        action_Copy = new QAction(NotePad);
        action_Copy->setObjectName("action_Copy");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/icons/icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Copy->setIcon(icon6);
        action_Paste = new QAction(NotePad);
        action_Paste->setObjectName("action_Paste");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/icons/icons/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Paste->setIcon(icon7);
        action_REdo = new QAction(NotePad);
        action_REdo->setObjectName("action_REdo");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/icons/icons/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_REdo->setIcon(icon8);
        action_Delete = new QAction(NotePad);
        action_Delete->setObjectName("action_Delete");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/icons/icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Delete->setIcon(icon9);
        action_About = new QAction(NotePad);
        action_About->setObjectName("action_About");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/icons/icons/information.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_About->setIcon(icon10);
        action_Exit = new QAction(NotePad);
        action_Exit->setObjectName("action_Exit");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/icons/icons/reject.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Exit->setIcon(icon11);
        action_Style = new QAction(NotePad);
        action_Style->setObjectName("action_Style");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/icons/icons/font-style.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Style->setIcon(icon12);
        action_Fontcolor = new QAction(NotePad);
        action_Fontcolor->setObjectName("action_Fontcolor");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/icons/icons/color-font.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Fontcolor->setIcon(icon13);
        action_New_window = new QAction(NotePad);
        action_New_window->setObjectName("action_New_window");
        action_table = new QAction(NotePad);
        action_table->setObjectName("action_table");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/new/icons/icons/icon-table.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_table->setIcon(icon14);
        action_stickpad = new QAction(NotePad);
        action_stickpad->setObjectName("action_stickpad");
        centralwidget = new QWidget(NotePad);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 10, 601, 331));
        NotePad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NotePad);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 641, 21));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName("menu_File");
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName("menu_Edit");
        menu_About = new QMenu(menubar);
        menu_About->setObjectName("menu_About");
        menu_Font = new QMenu(menubar);
        menu_Font->setObjectName("menu_Font");
        NotePad->setMenuBar(menubar);
        statusbar = new QStatusBar(NotePad);
        statusbar->setObjectName("statusbar");
        NotePad->setStatusBar(statusbar);
        toolBar = new QToolBar(NotePad);
        toolBar->setObjectName("toolBar");
        NotePad->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Edit->menuAction());
        menubar->addAction(menu_Font->menuAction());
        menubar->addAction(menu_About->menuAction());
        menu_File->addAction(action_New);
        menu_File->addAction(action_New_window);
        menu_File->addAction(action_Open);
        menu_File->addSeparator();
        menu_File->addAction(action_Save);
        menu_File->addAction(action_Saveas);
        menu_File->addSeparator();
        menu_File->addAction(action_Exit);
        menu_Edit->addAction(action_Undo);
        menu_Edit->addAction(action_REdo);
        menu_Edit->addSeparator();
        menu_Edit->addAction(action_Copy);
        menu_Edit->addAction(action_Paste);
        menu_Edit->addSeparator();
        menu_Edit->addAction(action_Cut);
        menu_Edit->addAction(action_Delete);
        menu_About->addAction(action_About);
        menu_About->addSeparator();
        menu_Font->addAction(action_Style);
        menu_Font->addSeparator();
        menu_Font->addAction(action_Fontcolor);
        toolBar->addAction(action_New);
        toolBar->addAction(action_Open);
        toolBar->addAction(action_Save);
        toolBar->addAction(action_Saveas);
        toolBar->addAction(action_Exit);
        toolBar->addSeparator();
        toolBar->addAction(action_Copy);
        toolBar->addAction(action_Paste);
        toolBar->addAction(action_Undo);
        toolBar->addAction(action_REdo);
        toolBar->addAction(action_Cut);
        toolBar->addAction(action_Delete);
        toolBar->addSeparator();
        toolBar->addAction(action_Style);
        toolBar->addAction(action_Fontcolor);
        toolBar->addSeparator();
        toolBar->addAction(action_About);
        toolBar->addSeparator();
        toolBar->addAction(action_table);
        toolBar->addAction(action_stickpad);

        retranslateUi(NotePad);

        QMetaObject::connectSlotsByName(NotePad);
    } // setupUi

    void retranslateUi(QMainWindow *NotePad)
    {
        NotePad->setWindowTitle(QCoreApplication::translate("NotePad", "NotePad", nullptr));
        action_New->setText(QCoreApplication::translate("NotePad", "New", nullptr));
        action_Open->setText(QCoreApplication::translate("NotePad", "Open", nullptr));
        action_Save->setText(QCoreApplication::translate("NotePad", "Save", nullptr));
        action_Saveas->setText(QCoreApplication::translate("NotePad", "Saveas", nullptr));
        action_Undo->setText(QCoreApplication::translate("NotePad", "Undo", nullptr));
        action_Cut->setText(QCoreApplication::translate("NotePad", "Cut", nullptr));
        action_Copy->setText(QCoreApplication::translate("NotePad", "Copy", nullptr));
        action_Paste->setText(QCoreApplication::translate("NotePad", "Paste", nullptr));
        action_REdo->setText(QCoreApplication::translate("NotePad", "Redo", nullptr));
        action_Delete->setText(QCoreApplication::translate("NotePad", "Delete", nullptr));
        action_About->setText(QCoreApplication::translate("NotePad", "About", nullptr));
        action_Exit->setText(QCoreApplication::translate("NotePad", "Exit", nullptr));
        action_Style->setText(QCoreApplication::translate("NotePad", "Fontstyle", nullptr));
        action_Fontcolor->setText(QCoreApplication::translate("NotePad", "Fontcolor", nullptr));
        action_New_window->setText(QCoreApplication::translate("NotePad", "New window", nullptr));
        action_table->setText(QCoreApplication::translate("NotePad", "table", nullptr));
        action_stickpad->setText(QCoreApplication::translate("NotePad", "stickpad", nullptr));
        menu_File->setTitle(QCoreApplication::translate("NotePad", "&File", nullptr));
        menu_Edit->setTitle(QCoreApplication::translate("NotePad", "&Edit", nullptr));
        menu_About->setTitle(QCoreApplication::translate("NotePad", "&About", nullptr));
        menu_Font->setTitle(QCoreApplication::translate("NotePad", "&Font", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("NotePad", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotePad: public Ui_NotePad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
