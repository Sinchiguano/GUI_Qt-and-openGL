// using
#include <iostream>


//using namespace std;

namespace first
{
  int x = 5;
  int y = 10;
}

namespace second
{
  double x = 3.1416;
  double y = 2.7183;
}

using namespace first;

int main ()
{

  std::cout << x << '\n';
  std::cout << y << '\n';
  std::cout << second::x << '\n';
  std::cout << second::y << '\n';

  return 0;
}
