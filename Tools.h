#ifndef TOOLS_H
#define TOOLS_H

#include <QDir>
#include "Patient.h"
#include <QJsonParseError>
#include <QJsonObject>
#include <QMessageBox>

/**
 * 获取已有的患者数量
 * @brief getNumberOfPatient
 * @return 患者数量
 */
static int getNumberOfPatient()
{
    QDir *dir = new QDir("Json\\");
    QStringList filter;
    filter << "*.json"; //选择文件后缀
    QList<QFileInfo> *fileInfo = new QList<QFileInfo>(dir->entryInfoList(filter));
    return fileInfo->count();
}

static int savePatient(int id, QString name, QString gender, int age, QString cardNumber, QString symp, double costs, double balance, int status, QJsonArray drugs)
{
    //转换为json文件并保存
    QJsonObject patientObject;
    patientObject.insert("status", status);
    patientObject.insert("id", id);
    patientObject.insert("name", name);
    patientObject.insert("gender", gender);
    patientObject.insert("age", age);
    patientObject.insert("cardNumber", cardNumber);
    patientObject.insert("costs", costs);
    patientObject.insert("balance", balance);
    patientObject.insert("drugs", drugs);
    patientObject.insert("symp", symp);
    QJsonDocument doc;
    doc.setObject(patientObject);

    QString path = "Json/" + QString::number(id) + ".json";
    qDebug() << path;
    QFile file(path);
    if (!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "文件打开失败";
        return 0;
    }
    if (!file.write(doc.toJson()))
    {
        qDebug() << "保存json文件失败";
        return 0;
    }
    file.close();
    return 1;
}

static int savePatient(Patient patient)
{
    //转换为json文件并保存
    QJsonObject patientObject;
    patientObject.insert("status", patient.getStatus());
    patientObject.insert("id", patient.getId());
    patientObject.insert("name", patient.getName());
    patientObject.insert("gender", patient.getGender());
    patientObject.insert("age", patient.getAge());
    patientObject.insert("cardNumber", patient.getCardNumber());
    patientObject.insert("costs", patient.getCosts());
    patientObject.insert("balance", patient.getBalance());
    patientObject.insert("drugs", patient.getDrugs());
    patientObject.insert("symp", patient.getSymp());
    QJsonDocument doc;
    doc.setObject(patientObject);

    QString path = "Json/" + QString::number(patient.getId()) + ".json";
    qDebug() << path;
    QFile file(path);
    if (!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "文件打开失败";
        return 0;
    }
    if (!file.write(doc.toJson()))
    {
        qDebug() << "保存json文件失败";
        return 0;
    }
    file.close();
    return 1;
}

static Patient readPatient(int id)
{
    QString path = "Json/" + QString::number(id) + ".json";
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "文件打开失败";
        Patient emptyPatient = Patient("empty");
        return emptyPatient;
    }
    QByteArray ba = file.readAll();

    //解析Json数据
    QJsonParseError jsonParseError;
    QJsonDocument jsonDocument(QJsonDocument::fromJson(ba, &jsonParseError));
    if (QJsonParseError::NoError != jsonParseError.error)
    {
        qDebug() << QString("JsonParseError:%1").arg(jsonParseError.errorString());
        Patient emptyPatient = Patient("empty");
        return emptyPatient;
    }
    //获取对象
    QJsonObject rootObject = jsonDocument.object();
    //在对象内根据键获取值
    // QJsonValue nameValue = rootObject.value("name");
    // QString name = nameValue.toString();
    int statusValue = rootObject.value("status").toInt();
    QString nameValue = rootObject.value("name").toString();
    int ageValue = rootObject.value("age").toInt();
    QString genderValue = rootObject.value("gender").toString();
    QString cardNumberValue = rootObject.value("cardNumber").toString();
    double balanceValue = rootObject.value("balance").toDouble();
    double costsValue = rootObject.value("costs").toDouble();
    QString sympValue = rootObject.value("symp").toString();
    int idValue = rootObject.value("id").toInt();
    QJsonArray drugsValue = rootObject.value("drugs").toArray();
    Patient patient = Patient(idValue, nameValue, genderValue, ageValue, cardNumberValue, sympValue, statusValue, costsValue, balanceValue, drugsValue);
    file.close();
    return patient;
}

static void readPatient(int id, Patient *patient)
{
    QString path = "Json/" + QString::number(id) + ".json";
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "文件打开失败";
    }
    QByteArray ba = file.readAll();

    //解析Json数据
    QJsonParseError jsonParseError;
    QJsonDocument jsonDocument(QJsonDocument::fromJson(ba, &jsonParseError));
    if (QJsonParseError::NoError != jsonParseError.error)
    {
        qDebug() << QString("JsonParseError:%1").arg(jsonParseError.errorString());
    }
    //获取对象
    QJsonObject rootObject = jsonDocument.object();
    //在对象内根据键获取值
    // QJsonValue nameValue = rootObject.value("name");
    // QString name = nameValue.toString();
    int statusValue = rootObject.value("status").toInt();
    QString nameValue = rootObject.value("name").toString();
    int ageValue = rootObject.value("age").toInt();
    QString genderValue = rootObject.value("gender").toString();
    QString cardNumberValue = rootObject.value("cardNumber").toString();
    double balanceValue = rootObject.value("balance").toDouble();
    double costsValue = rootObject.value("costs").toDouble();
    QString sympValue = rootObject.value("symp").toString();
    int idValue = rootObject.value("id").toInt();
    QJsonArray drugsValue = rootObject.value("drugs").toArray();
    patient = new Patient(idValue, nameValue, genderValue, ageValue, cardNumberValue, sympValue, statusValue, costsValue, balanceValue, drugsValue);
    file.close();
}

static int deletePatient(int id)
{
    QString path = "Json/" + QString::number(id) + ".json";
    QFileInfo fileInfo(path);
    if (fileInfo.isFile())
    {
        QFile::remove(path);
        qDebug() << "删除文件成功";
        return 1;
    }
    else
    {
        qDebug() << "删除文件失败";
        return 0;
    }
}

#endif // TOOLS_H
