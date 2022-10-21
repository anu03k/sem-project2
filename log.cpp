<<<<<<< HEAD
#include "log.h"
#include "ui_log.h"

log::log(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::log)
{
    ui->setupUi(this);
}

log::~log()
{
    delete ui;
}
=======
#include "log.h"
#include "ui_log.h"

log::log(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::log)
{
    ui->setupUi(this);
}

log::~log()
{
    delete ui;
}
>>>>>>> 2b3e0b8 (first commit)
