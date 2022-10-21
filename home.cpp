<<<<<<< HEAD
#include "home.h"
#include "ui_home.h"

home::home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);
}

home::~home()
{
    delete ui;
}
=======
#include "home.h"
#include "ui_home.h"
#include "donation.h"
#include "req.h"

home::home(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);
}

home::~home()
{
    delete ui;
}


void home::on_donate_clicked()
{
 donation don;
 don.setModal(true);
 don.exec();



}


void home::on_request_clicked()
{
    req re;
    re.setModal(true);
    re.exec();
       }

>>>>>>> 2b3e0b8 (first commit)
