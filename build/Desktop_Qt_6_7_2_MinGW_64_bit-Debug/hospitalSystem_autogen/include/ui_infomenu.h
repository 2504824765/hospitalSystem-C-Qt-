/********************************************************************************
** Form generated from reading UI file 'infomenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOMENU_H
#define UI_INFOMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoMenu
{
public:
    QGridLayout *gridLayout;
    QPushButton *deleteButton;
    QListView *listView;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;

    void setupUi(QWidget *InfoMenu)
    {
        if (InfoMenu->objectName().isEmpty())
            InfoMenu->setObjectName("InfoMenu");
        InfoMenu->resize(500, 350);
        gridLayout = new QGridLayout(InfoMenu);
        gridLayout->setObjectName("gridLayout");
        deleteButton = new QPushButton(InfoMenu);
        deleteButton->setObjectName("deleteButton");

        gridLayout->addWidget(deleteButton, 2, 0, 1, 1);

        listView = new QListView(InfoMenu);
        listView->setObjectName("listView");

        gridLayout->addWidget(listView, 1, 0, 1, 3);

        backButton = new QPushButton(InfoMenu);
        backButton->setObjectName("backButton");

        gridLayout->addWidget(backButton, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        label = new QLabel(InfoMenu);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 1, 1, 1);


        retranslateUi(InfoMenu);

        QMetaObject::connectSlotsByName(InfoMenu);
    } // setupUi

    void retranslateUi(QWidget *InfoMenu)
    {
        InfoMenu->setWindowTitle(QCoreApplication::translate("InfoMenu", "Form", nullptr));
        deleteButton->setText(QCoreApplication::translate("InfoMenu", "\345\210\240\351\231\244", nullptr));
        backButton->setText(QCoreApplication::translate("InfoMenu", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
        label->setText(QCoreApplication::translate("InfoMenu", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\344\277\241\346\201\257\347\225\214\351\235\242</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoMenu: public Ui_InfoMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOMENU_H
