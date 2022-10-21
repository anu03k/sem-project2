<<<<<<< HEAD
#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_okay_clicked();

    void on_okay_clicked(bool checked);

    void on_okay_2_clicked(bool checked);

    void on_okay_2_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
=======
#ifndef LOGIN_H
#define LOGIN_H
#include <QtSql>
#include <QSqlDatabase>
#include<QMessageBox>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_okay_clicked();

    void on_okay_clicked(bool checked);

    void on_okay_2_clicked(bool checked);

    void on_okay_2_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
>>>>>>> 2b3e0b8 (first commit)
