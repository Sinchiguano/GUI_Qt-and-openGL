#include "display.h"


#include<iostream>
#include<string>

display::display(int width,int hight, const std::string &title)
{
    //ctor
    std::cout<<"Constructor!"<<std::endl;
}

display::~display()
{
    //dtor
    std::cout<<"Destructor!"<<std::endl;
}

