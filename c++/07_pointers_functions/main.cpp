// pointer to functions
#include <iostream>
using namespace std;

int addition (int a, int b)
{ return (a+b); }

int subtraction (int a, int b)
{ return (a-b); }

int operation (int x, int y, int (*callback_function)(int x,int y))
{

  int g = (*callback_function)(x,y);
  return g;
}

int main ()
{



  int m = operation (7, 5, addition);
  cout <<m;

    cout<<"\n";
  int (*minus)(int a,int b) = subtraction;

  int n = operation (7, 5, minus);
  cout <<n;
  return 0;
}
