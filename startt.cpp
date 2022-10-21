#include "startt.h"
#include "ui_mainwindow.h"
 #include "why.h"
  #include "login.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}







void MainWindow::on_why_clicked()
{
    why w;
    w.setModal(true);
    w.exec();
}





void MainWindow::on_reg_clicked()
{
  login l;
  l.setModal(true);
  l.exec();

}

