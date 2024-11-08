/********************************************************************************
** Form generated from reading UI file 'drug.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRUG_H
#define UI_DRUG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Drug
{
public:
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_3;
    QLineEdit *idEdit;
    QPushButton *searchEdit_2;
    QFrame *line_3;
    QLabel *label_6;
    QTextEdit *drugEdit;
    QPushButton *backButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *costLabel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *searchEdit;
    QPushButton *addButton;
    QPushButton *checkButton;
    QLabel *label_4;
    QLabel *nameLabel;

    void setupUi(QWidget *Drug)
    {
        if (Drug->objectName().isEmpty())
            Drug->setObjectName("Drug");
        Drug->resize(500, 350);
        label = new QLabel(Drug);
        label->setObjectName("label");
        label->setGeometry(QRect(190, -10, 111, 51));
        line = new QFrame(Drug);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 30, 521, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(Drug);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(-10, 130, 531, 20));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        label_3 = new QLabel(Drug);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 50, 151, 31));
        idEdit = new QLineEdit(Drug);
        idEdit->setObjectName("idEdit");
        idEdit->setGeometry(QRect(220, 50, 81, 22));
        QFont font;
        font.setPointSize(10);
        idEdit->setFont(font);
        searchEdit_2 = new QPushButton(Drug);
        searchEdit_2->setObjectName("searchEdit_2");
        searchEdit_2->setGeometry(QRect(330, 50, 81, 31));
        searchEdit_2->setFont(font);
        line_3 = new QFrame(Drug);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(0, 180, 511, 20));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        label_6 = new QLabel(Drug);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(190, 200, 121, 31));
        drugEdit = new QTextEdit(Drug);
        drugEdit->setObjectName("drugEdit");
        drugEdit->setGeometry(QRect(60, 230, 381, 71));
        backButton = new QPushButton(Drug);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(220, 310, 81, 31));
        layoutWidget = new QWidget(Drug);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(320, 200, 142, 26));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        costLabel = new QLabel(layoutWidget);
        costLabel->setObjectName("costLabel");

        horizontalLayout_4->addWidget(costLabel);

        layoutWidget1 = new QWidget(Drug);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(90, 150, 331, 32));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        searchEdit = new QLineEdit(layoutWidget1);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setFont(font);

        horizontalLayout_2->addWidget(searchEdit);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        addButton = new QPushButton(layoutWidget1);
        addButton->setObjectName("addButton");
        addButton->setFont(font);

        horizontalLayout_5->addWidget(addButton);

        checkButton = new QPushButton(Drug);
        checkButton->setObjectName("checkButton");
        checkButton->setGeometry(QRect(330, 90, 81, 31));
        checkButton->setFont(font);
        label_4 = new QLabel(Drug);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 80, 91, 31));
        nameLabel = new QLabel(Drug);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(180, 90, 61, 21));

        retranslateUi(Drug);

        QMetaObject::connectSlotsByName(Drug);
    } // setupUi

    void retranslateUi(QWidget *Drug)
    {
        Drug->setWindowTitle(QCoreApplication::translate("Drug", "Form", nullptr));
        label->setText(QCoreApplication::translate("Drug", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">\350\215\257\346\210\277\347\225\214\351\235\242</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Drug", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\350\276\223\345\205\245\346\202\243\350\200\205\347\227\205\344\276\213\345\217\267</span></p></body></html>", nullptr));
        searchEdit_2->setText(QCoreApplication::translate("Drug", "\346\237\245\350\257\242", nullptr));
        label_6->setText(QCoreApplication::translate("Drug", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\345\275\223\345\211\215\350\215\257\345\223\201\344\277\241\346\201\257</span></p></body></html>", nullptr));
        backButton->setText(QCoreApplication::translate("Drug", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
        label_5->setText(QCoreApplication::translate("Drug", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\200\273\350\212\261\350\264\271\357\274\232</span></p></body></html>", nullptr));
        costLabel->setText(QCoreApplication::translate("Drug", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Drug", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\346\220\234\347\264\242\350\215\257\345\223\201\345\220\215\347\247\260</span></p></body></html>", nullptr));
        addButton->setText(QCoreApplication::translate("Drug", "\346\267\273\345\212\240", nullptr));
        checkButton->setText(QCoreApplication::translate("Drug", "\350\257\212\346\226\255\344\277\241\346\201\257", nullptr));
        label_4->setText(QCoreApplication::translate("Drug", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\202\243\350\200\205\345\247\223\345\220\215\357\274\232</span></p></body></html>", nullptr));
        nameLabel->setText(QCoreApplication::translate("Drug", "<html><head/><body><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Drug: public Ui_Drug {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUG_H
