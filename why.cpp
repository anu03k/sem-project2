<<<<<<< HEAD
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

=======
#include "why.h"
#include "ui_why.h"
#include "login.h"
#include "home.h"

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






void why::on_pushButton_2_clicked()
{
    home h2;
    h2.setModal(true);
    h2.exec();
}

>>>>>>> 2b3e0b8 (first commit)
