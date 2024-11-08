/********************************************************************************
** Form generated from reading UI file 'charge.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARGE_H
#define UI_CHARGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Charge
{
public:
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QPushButton *chargeButton;
    QPushButton *backButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *nameLabel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *balanceLabel;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLabel *costLabel;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLineEdit *chargeEdit;
    QFrame *line_4;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *idEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *searchButton;

    void setupUi(QWidget *Charge)
    {
        if (Charge->objectName().isEmpty())
            Charge->setObjectName("Charge");
        Charge->resize(500, 350);
        label = new QLabel(Charge);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 10, 111, 31));
        line = new QFrame(Charge);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 40, 511, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(Charge);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(-10, 150, 521, 20));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(Charge);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(-10, 220, 511, 20));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        chargeButton = new QPushButton(Charge);
        chargeButton->setObjectName("chargeButton");
        chargeButton->setGeometry(QRect(90, 300, 81, 31));
        backButton = new QPushButton(Charge);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(320, 300, 81, 31));
        layoutWidget = new QWidget(Charge);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 120, 166, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        QFont font;
        font.setPointSize(11);
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setFont(font);

        horizontalLayout_3->addWidget(nameLabel);

        layoutWidget1 = new QWidget(Charge);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(290, 120, 161, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        balanceLabel = new QLabel(layoutWidget1);
        balanceLabel->setObjectName("balanceLabel");
        balanceLabel->setFont(font);

        horizontalLayout_4->addWidget(balanceLabel);

        layoutWidget2 = new QWidget(Charge);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(170, 180, 181, 41));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName("label_7");

        horizontalLayout_5->addWidget(label_7);

        costLabel = new QLabel(layoutWidget2);
        costLabel->setObjectName("costLabel");

        horizontalLayout_5->addWidget(costLabel);

        layoutWidget3 = new QWidget(Charge);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(160, 240, 201, 41));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName("label_9");

        horizontalLayout_6->addWidget(label_9);

        chargeEdit = new QLineEdit(layoutWidget3);
        chargeEdit->setObjectName("chargeEdit");
        QFont font1;
        font1.setPointSize(10);
        chargeEdit->setFont(font1);

        horizontalLayout_6->addWidget(chargeEdit);

        line_4 = new QFrame(Charge);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(-10, 280, 511, 20));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        layoutWidget4 = new QWidget(Charge);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(91, 61, 331, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget4);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        idEdit = new QLineEdit(layoutWidget4);
        idEdit->setObjectName("idEdit");
        idEdit->setFont(font1);

        horizontalLayout->addWidget(idEdit);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        searchButton = new QPushButton(layoutWidget4);
        searchButton->setObjectName("searchButton");
        QFont font2;
        font2.setPointSize(9);
        searchButton->setFont(font2);

        horizontalLayout_2->addWidget(searchButton);


        retranslateUi(Charge);

        QMetaObject::connectSlotsByName(Charge);
    } // setupUi

    void retranslateUi(QWidget *Charge)
    {
        Charge->setWindowTitle(QCoreApplication::translate("Charge", "Form", nullptr));
        label->setText(QCoreApplication::translate("Charge", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">\347\274\264\350\264\271\347\225\214\351\235\242</span></p></body></html>", nullptr));
        chargeButton->setText(QCoreApplication::translate("Charge", "\345\205\205\345\200\274", nullptr));
        backButton->setText(QCoreApplication::translate("Charge", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
        label_3->setText(QCoreApplication::translate("Charge", "<html><head/><body><p>\350\264\246\346\210\267\344\275\231\351\242\235\357\274\232</p></body></html>", nullptr));
        nameLabel->setText(QCoreApplication::translate("Charge", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Charge", "<html><head/><body><p><span style=\" font-size:11pt;\">\350\264\246\346\210\267\344\275\231\351\242\235\357\274\232</span></p></body></html>", nullptr));
        balanceLabel->setText(QCoreApplication::translate("Charge", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Charge", "<html><head/><body><p><span style=\" font-size:11pt;\">\351\234\200\347\274\264\350\264\271\351\207\221\351\242\235\357\274\232</span></p></body></html>", nullptr));
        costLabel->setText(QCoreApplication::translate("Charge", "<html><head/><body><p><span style=\" font-size:11pt;\"><br/></span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("Charge", "<html><head/><body><p><span style=\" font-size:11pt;\">\347\274\264\350\264\271\351\207\221\351\242\235\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Charge", "<html><head/><body><p><span style=\" font-size:11pt;\">\346\202\243\350\200\205\347\227\205\344\276\213\345\217\267\357\274\232</span></p></body></html>", nullptr));
        searchButton->setText(QCoreApplication::translate("Charge", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Charge: public Ui_Charge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARGE_H
