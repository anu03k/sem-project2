<<<<<<< HEAD
#ifndef LOG_H
#define LOG_H

#include <QDialog>

namespace Ui {
class log;
}

class log : public QDialog
{
    Q_OBJECT

public:
    explicit log(QWidget *parent = nullptr);
    ~log();

private:
    Ui::log *ui;
};

#endif // LOG_H
=======
#ifndef LOG_H
#define LOG_H

#include <QDialog>

namespace Ui {
class log;
}

class log : public QDialog
{
    Q_OBJECT

public:
    explicit log(QWidget *parent = nullptr);
    ~log();

private:
    Ui::log *ui;
};

#endif // LOG_H
>>>>>>> 2b3e0b8 (first commit)
