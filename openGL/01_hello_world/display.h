#ifndef DISPLAY_H
#define DISPLAY_H


#include<string>

class display
{
    public:

        display(int width,int hight, const std::string &title);



        virtual ~display();


    protected:


    private:
        display(const display& other){}
        display& operator=(const display& other){}
};

#endif // DISPLAY_H
