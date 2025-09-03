#ifndef STICKPAD_H
#define STICKPAD_H

#include <QDialog>

namespace Ui {
class Stickpad;
}

class Stickpad : public QDialog
{
    Q_OBJECT

public:
    explicit Stickpad(QWidget *parent = nullptr);
    ~Stickpad();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Stickpad *ui;
};

#endif // STICKPAD_H
