// namespaces
#include <iostream>

using namespace std;


namespace food
{
  int value()
  {
    return 5;
  }
}

namespace restaurant
{
  const double pi = 3.1416;
  double value()
  {
  return 2*pi;
  }
}

int main ()
{
  cout << food::value() << '\n';
  cout << restaurant::value() << '\n';
  cout << restaurant::pi << '\n';
  return 0;
}
