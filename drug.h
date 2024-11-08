#ifndef DRUG_H
#define DRUG_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QJsonParseError>
#include <QJsonObject>
#include <QJsonArray>
#include "charge.h"

namespace Ui {
class Drug;
}

class Drug : public QWidget
{
    Q_OBJECT

public:
    explicit Drug(QWidget *parent = nullptr);
    ~Drug();

signals:
    void drugClose();

private slots:
    void on_backButton_clicked();

    void on_searchEdit_2_clicked();

    void on_addButton_clicked();

    void on_checkButton_clicked();

private:
    Ui::Drug *ui;

    double totalCosts = 0;
    int patientId = -1;
    QString drugText = "";
    QJsonArray drugs;
};

#endif // DRUG_H
