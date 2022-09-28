#ifndef WHY_H
#define WHY_H

#include <QDialog>

namespace Ui {
class why;
}

class why : public QDialog
{
    Q_OBJECT

public:
    explicit why(QWidget *parent = nullptr);
    ~why();

private slots:




    void on_pushButton_clicked();

private:
    Ui::why *ui;
};

#endif // WHY_H
