/********************************************************************************
** Form generated from reading UI file 'registmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTMENU_H
#define UI_REGISTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistMenu
{
public:
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *registAccountEdit;
    QLabel *label_3;
    QLineEdit *registPasswordEdit;
    QLabel *label_4;
    QLineEdit *comfirmPasswordEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *registButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *backButton;

    void setupUi(QWidget *RegistMenu)
    {
        if (RegistMenu->objectName().isEmpty())
            RegistMenu->setObjectName("RegistMenu");
        RegistMenu->resize(400, 300);
        label = new QLabel(RegistMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 30, 71, 21));
        widget = new QWidget(RegistMenu);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(100, 70, 221, 131));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        registAccountEdit = new QLineEdit(widget);
        registAccountEdit->setObjectName("registAccountEdit");

        gridLayout->addWidget(registAccountEdit, 0, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        registPasswordEdit = new QLineEdit(widget);
        registPasswordEdit->setObjectName("registPasswordEdit");

        gridLayout->addWidget(registPasswordEdit, 1, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        comfirmPasswordEdit = new QLineEdit(widget);
        comfirmPasswordEdit->setObjectName("comfirmPasswordEdit");

        gridLayout->addWidget(comfirmPasswordEdit, 2, 1, 1, 1);

        widget1 = new QWidget(RegistMenu);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(100, 240, 221, 22));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        registButton = new QPushButton(widget1);
        registButton->setObjectName("registButton");

        horizontalLayout->addWidget(registButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        backButton = new QPushButton(widget1);
        backButton->setObjectName("backButton");

        horizontalLayout->addWidget(backButton);


        retranslateUi(RegistMenu);

        QMetaObject::connectSlotsByName(RegistMenu);
    } // setupUi

    void retranslateUi(QWidget *RegistMenu)
    {
        RegistMenu->setWindowTitle(QCoreApplication::translate("RegistMenu", "Form", nullptr));
        label->setText(QCoreApplication::translate("RegistMenu", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">\346\263\250\345\206\214\347\225\214\351\235\242</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("RegistMenu", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("RegistMenu", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("RegistMenu", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        registButton->setText(QCoreApplication::translate("RegistMenu", "\346\263\250\345\206\214", nullptr));
        backButton->setText(QCoreApplication::translate("RegistMenu", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistMenu: public Ui_RegistMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTMENU_H
