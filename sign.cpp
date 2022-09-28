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

