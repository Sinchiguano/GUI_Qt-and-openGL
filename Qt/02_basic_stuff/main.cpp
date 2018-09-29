

#include <QApplication>

#include<QLabel>
#include<QPushButton>

#include<QHBoxLayout>

#include<QSlider>
#include<QSpinBox>








int main(int argc, char *argv[])
{
    //Main object
    QApplication prog(argc, argv);

   // QLabel *label=new QLabel ("Gametime!");

    //label->show();
    //(*label).show();

    //How to declare the connect
    //QPushButton *button=new QPushButton("Quit the program!");

    //QObject::connect(button,SIGNAL(clicked()),&prog,SLOT(quit()));
    //button->show();


    QWidget *mainWindow =new QWidget;
    mainWindow->setWindowTitle("How many chicken wings!!!");

    QSpinBox *spinner= new QSpinBox;
    QSlider *slider=new QSlider(Qt::Horizontal);

    slider->setRange(1,50);
    spinner->setRange(1,50);



    QObject::connect(spinner,SIGNAL(valueChanged(int)),
                     slider,SLOT(setValue(int)));

    QObject::connect(slider,SIGNAL(valueChanged(int)),
                     spinner,SLOT(setValue(int)));


    spinner->setValue(10);

    QHBoxLayout *layout=new QHBoxLayout;
    layout->addWidget(slider);
    layout->addWidget(spinner);

    mainWindow->setLayout(layout);
    mainWindow->show();







    return prog.exec();
}
