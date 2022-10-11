#include "donation.h"
#include "ui_donation.h"
#include <QMessageBox>

donation::donation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::donation)
{
    ui->setupUi(this);
}

donation::~donation()
{
    delete ui;
}




void donation::on_donate_clicked()
{
    QString age = ui->lineEdit_2->text();
       QString wt = ui->lineEdit_6->text();
        QString medic = ui->lineEdit_5->text();
        if (age<="18" ) {
           QMessageBox::information(this , "Donation","Sorry! You must be 18 years of age!");

        }

         else if(wt<="45"){
              QMessageBox::information(this , "Donation","Sorry! Your weight is not sufficient!");
         }

        else  if(medic == "y"){
              QMessageBox::information(this , "Donation","Sorry! You are not eligible to donate!");

         }
         else{
             QMessageBox::information(this , "Donation","Thank You! You're details is sent for review");


        }

}


