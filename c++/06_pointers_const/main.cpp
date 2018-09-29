// pointers as arguments:
#include <iostream>


using namespace std;

void increment_all (int* start, int* stop)
{
  int * i = start;
  while (i != stop)
  {
    ++(*i);  // increment value pointed
    ++i;     // increment pointer
  }
  for(int *i=start;i!=stop;i++)
  {
    cout<<*i<<std::endl;
  }
}

void print_all (const int* start, const int* stop)
{
  const int * current = start;
  while (current != stop)
  {
    cout << *current << '\n';
    ++current;     // increment pointer
  }
}

int main ()
{
  int numbers[] = {10,20,30};
  increment_all (numbers,numbers+3);
  print_all (numbers,numbers+3);
  return 0;
}
