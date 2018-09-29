#include "mainwindow.h"
#include "ui_mainwindow.h"


//Constructor
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
//Destructor
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   ui->label->setText("I am Cesar Sinchiguano!!!");
}
