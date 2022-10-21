<<<<<<< HEAD
#ifndef LOGIN2_H
#define LOGIN2_H

#include <QDialog>

namespace Ui {
class login2;
}

class login2 : public QDialog
{
    Q_OBJECT

public:
    explicit login2(QWidget *parent = nullptr);
    ~login2();

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

    void on_log_clicked();

private:
    Ui::login2 *ui;
};

#endif // LOGIN2_H
=======
#ifndef LOGIN2_H
#define LOGIN2_H

#include <QDialog>

namespace Ui {
class login2;
}

class login2 : public QDialog
{
    Q_OBJECT

public:
    explicit login2(QWidget *parent = nullptr);
    ~login2();

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

    void on_log_clicked();

private:
    Ui::login2 *ui;
};

#endif // LOGIN2_H
>>>>>>> 2b3e0b8 (first commit)
