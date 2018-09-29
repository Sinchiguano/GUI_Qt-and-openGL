#include <iostream>
#include <array>

#include<string>


using namespace std;

int main()
{
  std::array<int,3> myarray ={10,20,30};

  for(auto p=myarray.begin();p!=myarray.end();p++)
  {
  std::cout<<"Before: "<<*p<<std::endl;
  }

  for (int i=0; i<myarray.size(); ++i)
    ++myarray[i];

  for (int elem : myarray)
    std::cout <<"After: "<< elem << '\n';

    char question1[] = "What is your name? ";
    std::string question2 = "Where do you live? ";
    char answer1 [100];
    std::string answer2;
    //############################
    std::cout << question1;
    //std::cin >> answer1;

    //############################

    ///*
    std::cout << question2;
    //std::cin >> answer2;
    std::cout << "Hello, " << answer1;
    std::cout << " from " << answer2 << "!\n";
    //*/

    std::cout<<"another stuff"<<std::endl;

  int firstvalue = 5;
  int secondvalue = 15;
  int * p1;
  int  * p2;

  p1 = &firstvalue;  // p1 = address of firstvalue
  p2 = &secondvalue; // p2 = address of secondvalue

std::cout << "firstvalue is " << *p1 << '\n';
  std::cout << "secondvalue is " <<*p2<< '\n';
  std::cout << "firstvalue is " << p1 << '\n';
  std::cout << "secondvalue is " <<p2<< '\n';

  std::cout<<"============"<<std::endl;
  *p1 = 5000;          // value pointed to by p1 = 10
  *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
   std::cout << "firstvalue is " <<*p1 << '\n';
  std::cout << "secondvalue is " <<*p2  << '\n';
  p1 = p2;           // p1 = p2 (value of pointer is copied)
  *p1 = 20;          // value pointed to by p1 = 20

  std::cout << "firstvalue is " <<*p1 << '\n';
  std::cout << "secondvalue is " <<*p2  << '\n';

  int numbers[5];
  int * p;
  p = numbers;  *p = 10;
  p++;  *p = 20;
  p = &numbers[2];  *p = 30;
  p = numbers + 3;  *p = 40;
  p = numbers;  *(p+4) = 50;
  for (int n=0; n<5; n++)
    cout << numbers[n] << ", ";
  return 0;

}
