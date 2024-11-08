/********************************************************************************
** Form generated from reading UI file 'appointment.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPOINTMENT_H
#define UI_APPOINTMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Appointment
{
public:
    QLabel *label;
    QPushButton *submitButton;
    QPushButton *backButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *cardNumberEdit;
    QLineEdit *ageEdit;
    QLabel *label_5;
    QLineEdit *genderEdit;

    void setupUi(QWidget *Appointment)
    {
        if (Appointment->objectName().isEmpty())
            Appointment->setObjectName("Appointment");
        Appointment->resize(500, 350);
        label = new QLabel(Appointment);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 10, 141, 51));
        submitButton = new QPushButton(Appointment);
        submitButton->setObjectName("submitButton");
        submitButton->setGeometry(QRect(80, 270, 91, 31));
        backButton = new QPushButton(Appointment);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(320, 270, 91, 31));
        layoutWidget = new QWidget(Appointment);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(100, 60, 281, 191));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName("nameEdit");
        QFont font;
        font.setPointSize(10);
        nameEdit->setFont(font);

        gridLayout->addWidget(nameEdit, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        cardNumberEdit = new QLineEdit(layoutWidget);
        cardNumberEdit->setObjectName("cardNumberEdit");
        cardNumberEdit->setFont(font);

        gridLayout->addWidget(cardNumberEdit, 3, 1, 1, 1);

        ageEdit = new QLineEdit(layoutWidget);
        ageEdit->setObjectName("ageEdit");
        ageEdit->setFont(font);

        gridLayout->addWidget(ageEdit, 2, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        genderEdit = new QLineEdit(layoutWidget);
        genderEdit->setObjectName("genderEdit");
        genderEdit->setFont(font);

        gridLayout->addWidget(genderEdit, 1, 1, 1, 1);


        retranslateUi(Appointment);

        QMetaObject::connectSlotsByName(Appointment);
    } // setupUi

    void retranslateUi(QWidget *Appointment)
    {
        Appointment->setWindowTitle(QCoreApplication::translate("Appointment", "Form", nullptr));
        label->setText(QCoreApplication::translate("Appointment", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">\346\214\202\345\217\267\347\225\214\351\235\242</span></p></body></html>", nullptr));
        submitButton->setText(QCoreApplication::translate("Appointment", "\346\217\220\344\272\244", nullptr));
        backButton->setText(QCoreApplication::translate("Appointment", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
        label_3->setText(QCoreApplication::translate("Appointment", "<html><head/><body><p><span style=\" font-size:11pt;\">\345\247\223\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Appointment", "<html><head/><body><p><span style=\" font-size:11pt;\">\345\271\264\351\276\204\357\274\232</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Appointment", "<html><head/><body><p><span style=\" font-size:11pt;\">\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Appointment", "<html><head/><body><p><span style=\" font-size:11pt;\">\346\200\247\345\210\253\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Appointment: public Ui_Appointment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPOINTMENT_H
