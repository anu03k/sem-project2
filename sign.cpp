<<<<<<< HEAD
#include "sign.h"
#include "ui_sign.h"

sign::sign(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sign)
{
    ui->setupUi(this);
}

sign::~sign()
{
    delete ui;
}


//void sign::on_pushButton_2_clicked()
//{
//    home ho;
//    ho.setModal(true);

//    QString user = ui->lineEdit->text();
//    QString pw = ui->lineEdit_2->text();
//    if(user=="admin" && pw=="admin"){
//        hide();
//        ho.exec();
//    }
//    else {



//    }



//}

=======
#include "sign.h"
#include "ui_sign.h"
#include <QMessageBox>
#include "home.h"

sign::sign(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sign)
{
    ui->setupUi(this);
}

sign::~sign()
{
    delete ui;
}





void sign::on_confirm_clicked()
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

>>>>>>> 2b3e0b8 (first commit)
