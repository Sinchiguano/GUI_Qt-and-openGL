
#include <iostream>
using namespace std;

void duplicate (int& a, int& b, int& c)
{
  a*=2;
  b*=2;
  c*=2;
}

int main ()
{
  int x=1, y=3, z=7;
  duplicate (x, y, z);
  cout << "x=" << x << ", y=" << y << ", z=" << z;
  return 0;
}

/*

#include <iostream>
#include <string>
using namespace std;

int main ()
{

  string str ("Hello!");
  for (char c : str)
  {
    cout << "[" << c << "]";
  }
  cout << '\n';
}

*/

/*
#include <iostream>
#include <string>

using namespace std;

int main()
{

  string str="Hello!";
  for (char c : str)
  {
    cout << "[" << c << "]";
  }

    string mystr;
    cout << "What's your name? ";
    getline (cin, mystr);
    cout << "Hello " << mystr << ".\n";
    cout << "What is your favorite team? ";
    getline (cin, mystr);
    cout << "I like " << mystr << " too!\n";

  return 0;
}
 */
