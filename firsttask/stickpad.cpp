#include "stickpad.h"
#include "ui_stickpad.h"

Stickpad::Stickpad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Stickpad)
{
    ui->setupUi(this);
}

Stickpad::~Stickpad()
{
    delete ui;
}

void Stickpad::on_pushButton_clicked()
{
    // when click close it disable

}

