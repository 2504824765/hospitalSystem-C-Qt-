/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QAction *appointAction;
    QAction *hendleAction;
    QAction *drugAction;
    QAction *chargeAction;
    QAction *infoAction;
    QWidget *centralwidget;
    QPushButton *exitButton;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(500, 350);
        appointAction = new QAction(Menu);
        appointAction->setObjectName("appointAction");
        hendleAction = new QAction(Menu);
        hendleAction->setObjectName("hendleAction");
        drugAction = new QAction(Menu);
        drugAction->setObjectName("drugAction");
        chargeAction = new QAction(Menu);
        chargeAction->setObjectName("chargeAction");
        infoAction = new QAction(Menu);
        infoAction->setObjectName("infoAction");
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName("centralwidget");
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(400, 270, 81, 31));
        Menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Menu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 500, 17));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName("menu_4");
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName("menu_5");
        Menu->setMenuBar(menubar);
        statusbar = new QStatusBar(Menu);
        statusbar->setObjectName("statusbar");
        Menu->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menubar->addAction(menu_5->menuAction());
        menu->addAction(appointAction);
        menu_2->addAction(hendleAction);
        menu_3->addAction(drugAction);
        menu_4->addAction(chargeAction);
        menu_5->addAction(infoAction);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "MainWindow", nullptr));
        appointAction->setText(QCoreApplication::translate("Menu", "\346\214\202\345\217\267\347\225\214\351\235\242", nullptr));
        hendleAction->setText(QCoreApplication::translate("Menu", "\347\234\213\350\257\212\347\225\214\351\235\242", nullptr));
        drugAction->setText(QCoreApplication::translate("Menu", "\350\215\257\346\210\277\347\225\214\351\235\242", nullptr));
        chargeAction->setText(QCoreApplication::translate("Menu", "\347\274\264\350\264\271\347\252\227\345\217\243", nullptr));
        infoAction->setText(QCoreApplication::translate("Menu", "\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        exitButton->setText(QCoreApplication::translate("Menu", "\351\200\200\345\207\272", nullptr));
        menu->setTitle(QCoreApplication::translate("Menu", "\346\214\202\345\217\267\345\214\273\347\224\237", nullptr));
        menu_2->setTitle(QCoreApplication::translate("Menu", "\347\234\213\350\257\212\345\214\273\347\224\237", nullptr));
        menu_3->setTitle(QCoreApplication::translate("Menu", "\350\215\257\346\210\277\345\214\273\347\224\237", nullptr));
        menu_4->setTitle(QCoreApplication::translate("Menu", "\347\274\264\350\264\271\347\225\214\351\235\242", nullptr));
        menu_5->setTitle(QCoreApplication::translate("Menu", "\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
