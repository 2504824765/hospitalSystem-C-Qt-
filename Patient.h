#ifndef PATIENT_H
#define PATIENT_H

#include <QString>
#include <QJsonArray>

#endif // PATIENT_H

enum STATUS
{
    REGISTERED,
    SEEN,
    PRESCRIBED,
    ILLIGAL
};

class Patient
{
private:
    int status = ILLIGAL;
    int id;
    QString name;
    QString gender;
    int age;
    QString cardNumber;
    QString symp;
    double costs;
    double balance;
    QJsonArray drugs;

public:
    int getStatus() {return this->status;}
    int getId() {return this->id;}
    QString getName() {return this->name;}
    QString getGender() {return this->gender;}
    int getAge() {return this->age;}
    QString getCardNumber() {return this->cardNumber;}
    QString getSymp() {return this->symp;}
    QJsonArray getDrugs() {return this->drugs;}
    double getCosts() {return this->costs;}
    double getBalance() {return this->balance;}

    void setStatus(int status) {this->status = status;}
    void setId(int id) {this->id = id;}
    void setName(QString name) {this->name = name;}
    void setGender(QString gender) {this->gender = gender;}
    void setAge(int age) {this->age = age;}
    void setCardNumber(QString cardNumber) {this->cardNumber = cardNumber;}
    void setSymp(QString symp) {this->symp = symp;}
    void setCosts(double costs) {this->costs = costs;}
    void setBalance(double balance) {this->balance = balance;}
    void setDrugs(QJsonArray drugs) {this->drugs = drugs;}
    void printPatient()
    {
        qDebug() << "name:" << this->name;
        qDebug() << "id:" << this->id;
        qDebug() << "gender:" << this->gender;
        qDebug() << "age:" << this->age;
        qDebug() << "cardNumber:" << this->cardNumber;
        qDebug() << "symp:" << this->symp;
        qDebug() << "status:" << this->status;
        qDebug() << "costs:" << this->costs;
        qDebug() << "balance:" << this->balance;
    }

    Patient(QString empty = "empty") {
        this->name = empty;
    }
    Patient(int id = -1, QString name = "No name", QString gender = "NULL", int age = -1, QString cardNumber = "NULL")
    {
        this->id = id;
        this->name = name;
        this->gender = gender;
        this->age = age;
        this->cardNumber = cardNumber;
    }
    Patient(int id, QString name, QString gender, int age, QString cardNumber, QString symp, int status, double costs, double balance, QJsonArray drugs)
    {
        this->id = id;
        this->name = name;
        this->gender = gender;
        this->age = age;
        this->cardNumber = cardNumber;
        this->symp = symp;
        this->status = status;
        this->costs = costs;
        this->balance = balance;
        this->drugs = drugs;
    }
    ~Patient() {}
};
