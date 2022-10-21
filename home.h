<<<<<<< HEAD
#ifndef HOME_H
#define HOME_H

#include <QMainWindow>

namespace Ui {
class home;
}

class home : public QMainWindow
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = nullptr);
    ~home();

private:
    Ui::home *ui;
};

#endif // HOME_H
=======
#ifndef HOME_H
#define HOME_H

#include <QDialog>

namespace Ui {
class home;
}

class home : public QDialog
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = nullptr);
    ~home();

private slots:
    void on_donate_clicked();

    void on_request_clicked();

private:
    Ui::home *ui;
};

#endif // HOME_H
>>>>>>> 2b3e0b8 (first commit)
