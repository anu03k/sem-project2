<<<<<<< HEAD
#ifndef DONATION_H
#define DONATION_H

#include <QDialog>

namespace Ui {
class donation;
}

class donation : public QDialog
{
    Q_OBJECT

public:
    explicit donation(QWidget *parent = nullptr);
    ~donation();

private slots:
    void on_donate_clicked();

private:
    Ui::donation *ui;
};

#endif // DONATION_H
=======
#ifndef DONATION_H
#define DONATION_H

#include <QDialog>

namespace Ui {
class donation;
}

class donation : public QDialog
{
    Q_OBJECT

public:
    explicit donation(QWidget *parent = nullptr);
    ~donation();

private slots:
    void on_donate_clicked();

private:
    Ui::donation *ui;
};

#endif // DONATION_H
>>>>>>> 2b3e0b8 (first commit)
