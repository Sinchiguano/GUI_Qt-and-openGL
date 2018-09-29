// function template
#include <iostream>



template <class myType>
myType sum (myType a, myType b)
{
  myType result = a + b;
  return result;
}


template <class T, class U>
bool are_equal (T a, U b)
{
  return (a==b);
}

template <class p, int N>
p fixed_multiply (p val)
{
  return val * N;
}


int main ()
{
  auto i=5, j=6, k=0;
  auto f=2.0, g=0.5, h=0.0;

  k=sum<int>(i,j);
  h=sum<double>(f,g);
  std::cout << k << '\n';
  std::cout << h << '\n';
  std::cout<<sum(4,3)<<std::endl;

    if (are_equal(10,10.0))
        std::cout << "x and y are equal\n";
    else
        std::cout << "x and y are not equal\n";
    std::cout<<"I am here...."<<std::endl;
    std::cout<<are_equal<int,double>(10,10.0)<<std::endl;

  std::cout<<"=================="<<std::endl;

  std::cout << fixed_multiply<int,2>(10) << '\n';
  std::cout << fixed_multiply<int,3>(10) << '\n';

  return 0;
}
