
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str {"Hello!"};
  for (char c : str)
  {
    cout << "[" << c << "]";
  }
  cout << '\n';
}
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
