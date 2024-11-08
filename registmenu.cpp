#include "registmenu.h"
#include "ui_registmenu.h"

RegistMenu::RegistMenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RegistMenu)
{
    ui->setupUi(this);

    this->setWindowTitle("注册界面");
    connect(ui->backButton, &QPushButton::clicked, this, &RegistMenu::close);
}

RegistMenu::~RegistMenu()
{
    delete ui;
}

void RegistMenu::on_registButton_clicked()
{
    QString inputAccount = ui->registAccountEdit->text();
    QString inputPassword = ui->registPasswordEdit->text();
    QString confirmPassword = ui->comfirmPasswordEdit->text();

    if (inputPassword.compare(confirmPassword) != 0)
    {
        QMessageBox::about(this, "警告", "两次密码不一致");
    } else {
        if (inputAccount.compare(inputPassword) == 0)
        {
            QMessageBox::about(this, "抱歉", "账号与密码不能一致");
        } else {
            qDebug() << "registAccount:" << inputAccount;
            qDebug() << "registPassword:" << inputPassword;
            qDebug() << "confirmPassword:" << confirmPassword;

            //这里无法用ReadWrite格式打开，如果用上述格式打开重写不了文件 为什么？
            QFile file("accounts.txt");
            file.open(QIODevice::ReadWrite);
            bool isExist = false;
            while (!file.atEnd())
            {
                QString nextLine = file.readLine();
                nextLine = nextLine.trimmed();
                if (inputAccount.compare(nextLine) == 0) isExist = true; break;
            }
            qDebug() << "isExist:" << isExist;
            if (isExist)
            {
                QMessageBox::about(this, "", "当前账号已存在");
                return;
            } else {
                QString all = file.readAll();
                qDebug() << "all:" <<all;
                all.append("\n" + inputAccount + "\n" + inputPassword);
                qDebug() << all;
                QByteArray ba = all.toLatin1();
                file.close();
                file.open(QIODeviceBase::WriteOnly);
                file.write(ba);
                file.close();
                QMessageBox::about(this, "提示", "注册成功");
                emit subclose();
                this->close();
            }
        }
    }
}

