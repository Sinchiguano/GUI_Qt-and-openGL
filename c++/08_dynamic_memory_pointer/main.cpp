// rememb-o-matic
#include <iostream>
#include <new>
using namespace std;

int main ()
{
  int i(0);

  cout << "How many numbers would you like to type? ";
  cin >> i;

  int *p= new (nothrow) int[i];

  if (p == nullptr)
    cout << "Error: memory could not be allocated";
  else
  {
    for (auto n=0; n<i; n++)
    {
      cout << "Enter number: ";
      cin >> *(p+n);
      // cin >> p[n];
    }
  }

    cout << "You have entered: \n";
    for(int f=0;f<i;f++)
    {
        std::cout<<*(p+f)<<std::endl;
    }

        delete[] p;

  return 0;
}
