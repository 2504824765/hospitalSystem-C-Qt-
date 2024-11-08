#include "infomenu.h"
#include "ui_infomenu.h"

InfoMenu::InfoMenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::InfoMenu)
{
    ui->setupUi(this);

    //设置ListView不可编辑
    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //初始化stringModel让其与ListView绑定
    this->stringModel = new QStringListModel(ui->listView);
    ui->listView->setModel(stringModel);
    this->setWindowTitle("人员管理");

    //设置ListView的内容
    QString head = "ID\t姓名\t年龄\t性别\t当前状态";
    this->stringModel->setStringList(QStringList()
                                     << head);
    int patientCount = getNumberOfPatient();
    qDebug() << "patientCount:" << patientCount;
    QString patientInfo = "";
    for (int i = 1; i <= patientCount; ++i) {
        Patient patient = readPatient(i);
        patient.printPatient();
        patientInfo = QString::number(patient.getId()) + "\t" + patient.getName() + "\t" + QString::number(patient.getAge()) + "\t" + patient.getGender() + "\t";
        switch (patient.getStatus()) {
        case REGISTERED:
            patientInfo += "已挂号";
            break;
        case SEEN:
            patientInfo += "已看诊";
            break;
        case PRESCRIBED:
            patientInfo += "已开药";
            break;
        default:
            patientInfo += "人员非法！";
            break;
        }
        qDebug() << "str:" << patientInfo;
        //添加进ListView
        stringModel->insertRow(stringModel->rowCount()); //插入一行空行
        QModelIndex index = stringModel->index(stringModel->rowCount()-1, 0);
        stringModel->setData(index, patientInfo, Qt::DisplayRole);
    }
}

InfoMenu::~InfoMenu()
{
    delete ui;
}

/**
 * 删除选中的数据
 * @brief InfoMenu::on_deleteButton_clicked
 */
void InfoMenu::on_deleteButton_clicked()
{
    QModelIndex index = ui->listView->currentIndex();
    if (-1 == index.row())
    {
        QMessageBox::about(this, "", "请选中一个患者数据");
        return;
    }

    //文件删除操作
    //获取选中的数据
    QString selectedInfo = index.data().toString();
    qDebug() << "selectedInfo:" << selectedInfo;
    //分割字符串
    QStringList info = selectedInfo.split("\t");
    QString firstValue = info.value(0);
    qDebug() << "firstValue" << firstValue;
    if (firstValue.compare("ID") == 0)
    {
        QMessageBox::about(this, "", "这是表头！");
        return;
    }
    int patientIndex = info.value(0).toInt();
    qDebug() << "info:" << info;
    qDebug() << "patientIndex:" << patientIndex;

    if (deletePatient(patientIndex) == 1)
    {
        QMessageBox::about(this, "", "删除成功");
    }
    else
    {
        QMessageBox::about(this, "", "删除失败");
        return;
    }

    //移除ListView上的数据
    stringModel->removeRows(index.row(), 1); //arg1:哪一行 arg2:几行
}


void InfoMenu::on_backButton_clicked()
{
    emit infoMenuClose();
    this->close();
}

