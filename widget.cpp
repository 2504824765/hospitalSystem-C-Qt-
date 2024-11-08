#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowTitle("登录界面");
    ui->accountEdit->setPlaceholderText("admin");
    ui->passwordEdit->setPlaceholderText("123");
    menu = nullptr;
    QMessageBox::about(this, "说明", "作者：软件2301陈赞20236974\n"
                                     "此项目仅用于C++大作业使用");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_accountEdit_editingFinished()
{
    account = ui->accountEdit->text();
    qDebug() << "account:" << account;
}


void Widget::on_passwordEdit_editingFinished()
{
    password = ui->passwordEdit->text();
    qDebug() << "password:" << password;
    on_loginButton_clicked();
}


void Widget::on_loginButton_clicked()
{
    QFile file("accounts.txt");
    bool ok = file.open(QIODevice::ReadWrite);
    if (ok == false)
    {
        qDebug() << "账号文件打开失败";
    } else {
        qDebug() << "账号文件打开成功";
        bool isLogin = false;
        while (!file.atEnd())
        {
            QString acc = file.readLine();
            acc = acc.trimmed(); //去掉QString内的换行符
            qDebug() << "acc:" << acc;
            if (account.compare(acc) != 0)
            {
                continue;
            }
            else
            {
                QString pas = file.readLine();
                pas = pas.trimmed(); ////去掉QString内的换行符
                qDebug() << "pas:" << pas;
                if (password.compare(pas) == 0)
                {
                    qDebug() << "登录成功";
                    isLogin = true;
                    login();
                    this->close();
                    break;
                }
            }
        }
        if (isLogin != true)
        {
            QMessageBox::about(this, "", "账号或密码错误");
        }
    }

    file.close();
}


void Widget::on_registButton_clicked()
{
    this->close();
    RegistMenu *registMenu = new RegistMenu();
    connect(registMenu, &RegistMenu::subclose, this, &Widget::show);
    registMenu->show();
}


void Widget::on_accountEdit_cursorPositionChanged(int arg1, int arg2)
{
    QFile file("accounts.txt");
    bool ok = file.open(QIODevice::ReadOnly);
    if (!ok)
    {
        QMessageBox::about(this, "", "当前没有账号信息，请先进行注册");
        on_registButton_clicked();
    }
    file.close();
}

void Widget::login()
{
    // Appointment *appointment = new Appointment();
    // appointment->show();
    if (menu == nullptr) //必须要写，如果不写可能导致点击login的同时passwordTextLine的focus改变而创建两个窗口
    {
        menu = new Menu();
    }
    menu->show();
}
