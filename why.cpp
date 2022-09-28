#include "why.h"
#include "ui_why.h"
#include "login.h"


why::why(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::why)
{
    ui->setupUi(this);
}

why::~why()
{
    delete ui;
}




void why::on_pushButton_clicked()
{
    login log;
    log.setModal(true);
    log.exec();
}

