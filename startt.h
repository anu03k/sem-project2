#ifndef STARTT_H
#define STARTT_H
#include <QtSql>

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_why_clicked();



    void on_reg_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // STARTT_H
