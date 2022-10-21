<<<<<<< HEAD
#include "login.h"
#include "login2.h"
#include "ui_login.h"
#include "home.h"
#include <QMessageBox>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}





void login::on_okay_clicked()
{
//    home h1;


//   QString age = ui->lineEdit_5->text();
//   QString wt = ui->lineEdit_6->text();
//    QString medic = ui->lineEdit_6->text();
//    if (age<="18" ) {
//       QMessageBox::information(this , "Login","Sorry! You must be 18 years of age!");

//    }
//    else {
//     h1.setModal(true);
//     h1.exec();

//    }
//     if(wt<="45"){
//          QMessageBox::information(this , "Login","Sorry! Your weight is not sufficient!");
//     }
//     else{
//         h1.setModal(true);
//         h1.exec();
//     }
//     if(medic == "y"){
//          QMessageBox::information(this , "Login","Sorry! Your weight is not sufficient!");

//     }

    home h2;
    h2.setModal(true);
    h2.exec();

}




void login::on_okay_2_clicked()
{
    login2 log;
    log.setModal(true);
    log.exec();
}

=======
#include "login.h"
#include "login2.h"
#include "ui_login.h"
#include "home.h"
#include <QMessageBox>
#include<QSql>
#include <QSqlDatabase>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}





void login::on_okay_clicked()
{
//    home h1;


//   QString age = ui->lineEdit_5->text();
//   QString wt = ui->lineEdit_6->text();
//    QString medic = ui->lineEdit_6->text();
//    if (age<="18" ) {
//       QMessageBox::information(this , "Login","Sorry! You must be 18 years of age!");

//    }
//    else {
//     h1.setModal(true);
//     h1.exec();

//    }
//     if(wt<="45"){
//          QMessageBox::information(this , "Login","Sorry! Your weight is not sufficient!");
//     }
//     else{
//         h1.setModal(true);
//         h1.exec();
//     }
//     if(medic == "y"){
//          QMessageBox::information(this , "Login","Sorry! Your weight is not sufficient!");

//     }

    home h2;
    h2.setModal(true);
    QSqlDatabase sqlitedb = QSqlDatabase ::addDatabase("QSQLITE");
       sqlitedb.setDatabaseName("C:/Users/Lenovo/OneDrive/Desktop/database/anuja.db");
       if(!sqlitedb.open()){
           QMessageBox ::information(this, "Not connected ", "to the databse ");
       }
       else{
           QMessageBox::information(this, "good","Connected ");
       }
    h2.exec();

}




void login::on_okay_2_clicked()
{
    login2 log;
    log.setModal(true);
    log.exec();
}

>>>>>>> 2b3e0b8 (first commit)
