#include "login2.h"
#include "ui_login2.h"
#include "home.h"
#include <QMessageBox>

login2::login2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login2)
{
    ui->setupUi(this);
}

login2::~login2()
{
    delete ui;
}





void login2::on_log_clicked()
{
    home h1;


   QString username = ui->lineEdit->text();
   QString pw = ui->lineEdit_2->text();
    if (username=="user" && pw== "user") {
        hide();
             h1.setModal(true);
        h1.exec();

    }
    else {QMessageBox::information(this , "Login","Invalid username or password");

    }
}

