#include "findcrap.h"
#include "ui_findcrap.h"




findcrap::findcrap(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::findcrap)
{
    ui->setupUi(this);
}

findcrap::~findcrap()
{
    delete ui;
}

void findcrap::on_pushButton_clicked()
{

}
