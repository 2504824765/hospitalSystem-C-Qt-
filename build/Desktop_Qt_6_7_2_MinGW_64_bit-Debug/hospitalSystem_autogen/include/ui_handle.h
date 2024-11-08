/********************************************************************************
** Form generated from reading UI file 'handle.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HANDLE_H
#define UI_HANDLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Handle
{
public:
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_6;
    QTextEdit *textEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *idEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *searchButton;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *nameLabel;
    QLabel *label_4;
    QLabel *ageLabel;
    QLabel *label_5;
    QLabel *ganderLabel;
    QPushButton *submitButton;
    QPushButton *backButton;

    void setupUi(QWidget *Handle)
    {
        if (Handle->objectName().isEmpty())
            Handle->setObjectName("Handle");
        Handle->resize(500, 350);
        label = new QLabel(Handle);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 0, 91, 31));
        line = new QFrame(Handle);
        line->setObjectName("line");
        line->setGeometry(QRect(-10, 80, 511, 16));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(Handle);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(-10, 30, 511, 16));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(Handle);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(-10, 170, 511, 20));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        label_6 = new QLabel(Handle);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(210, 180, 71, 31));
        textEdit = new QTextEdit(Handle);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 210, 461, 81));
        layoutWidget = new QWidget(Handle);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 50, 431, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        idEdit = new QLineEdit(layoutWidget);
        idEdit->setObjectName("idEdit");

        horizontalLayout->addWidget(idEdit);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        searchButton = new QPushButton(layoutWidget);
        searchButton->setObjectName("searchButton");

        horizontalLayout_2->addWidget(searchButton);

        layoutWidget1 = new QWidget(Handle);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(140, 100, 191, 71));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        nameLabel = new QLabel(layoutWidget1);
        nameLabel->setObjectName("nameLabel");

        gridLayout->addWidget(nameLabel, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        ageLabel = new QLabel(layoutWidget1);
        ageLabel->setObjectName("ageLabel");

        gridLayout->addWidget(ageLabel, 1, 1, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        ganderLabel = new QLabel(layoutWidget1);
        ganderLabel->setObjectName("ganderLabel");

        gridLayout->addWidget(ganderLabel, 2, 1, 1, 1);

        submitButton = new QPushButton(Handle);
        submitButton->setObjectName("submitButton");
        submitButton->setGeometry(QRect(80, 300, 80, 31));
        backButton = new QPushButton(Handle);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(350, 300, 80, 31));

        retranslateUi(Handle);

        QMetaObject::connectSlotsByName(Handle);
    } // setupUi

    void retranslateUi(QWidget *Handle)
    {
        Handle->setWindowTitle(QCoreApplication::translate("Handle", "Form", nullptr));
        label->setText(QCoreApplication::translate("Handle", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\347\234\213\350\257\212\347\225\214\351\235\242</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Handle", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\350\257\212\346\226\255\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Handle", "\346\202\243\350\200\205\347\227\205\344\276\213\345\217\267\357\274\232", nullptr));
        searchButton->setText(QCoreApplication::translate("Handle", "\346\237\245\350\257\242", nullptr));
        label_3->setText(QCoreApplication::translate("Handle", "<html><head/><body><p><span style=\" font-size:11pt;\">\346\202\243\350\200\205\345\247\223\345\220\215\357\274\232</span></p></body></html>", nullptr));
        nameLabel->setText(QCoreApplication::translate("Handle", "<html><head/><body><p><span style=\" font-size:11pt;\">TextLabel</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Handle", "<html><head/><body><p><span style=\" font-size:11pt;\">\346\202\243\350\200\205\345\271\264\351\276\204\357\274\232</span></p></body></html>", nullptr));
        ageLabel->setText(QCoreApplication::translate("Handle", "<html><head/><body><p><span style=\" font-size:11pt;\">TextLabel</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Handle", "<html><head/><body><p><span style=\" font-size:11pt;\">\346\202\243\350\200\205\346\200\247\345\210\253\357\274\232</span></p></body></html>", nullptr));
        ganderLabel->setText(QCoreApplication::translate("Handle", "<html><head/><body><p><span style=\" font-size:11pt;\">TextLabel</span></p></body></html>", nullptr));
        submitButton->setText(QCoreApplication::translate("Handle", "\346\217\220\344\272\244", nullptr));
        backButton->setText(QCoreApplication::translate("Handle", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Handle: public Ui_Handle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANDLE_H
