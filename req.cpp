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
