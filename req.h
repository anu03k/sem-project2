<<<<<<< HEAD
#ifndef REQ_H
#define REQ_H

#include <QDialog>

namespace Ui {
class req;
}

class req : public QDialog
{
    Q_OBJECT

public:
    explicit req(QWidget *parent = nullptr);
    ~req();

private:
    Ui::req *ui;
};

#endif // REQ_H
=======
#ifndef REQ_H
#define REQ_H

#include <QDialog>

namespace Ui {
class req;
}

class req : public QDialog
{
    Q_OBJECT

public:
    explicit req(QWidget *parent = nullptr);
    ~req();

private:
    Ui::req *ui;
};

#endif // REQ_H
>>>>>>> 2b3e0b8 (first commit)
