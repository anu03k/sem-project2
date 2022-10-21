<<<<<<< HEAD
#include "req.h"
#include "ui_req.h"

req::req(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::req)
{
    ui->setupUi(this);
}

req::~req()
{
    delete ui;
}
=======
#include "req.h"
#include "ui_req.h"

req::req(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::req)
{
    ui->setupUi(this);
}

req::~req()
{
    delete ui;
}
>>>>>>> 2b3e0b8 (first commit)
