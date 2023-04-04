//9. Write a C++ Program to Perform Simple Addition Function Using Templates
#include<iostream>
using namespace std;
template <class T>
T add (T x , T y)
{
 return x+y;
}
int main()
{
  cout<<"Total = "<<add<int>(10,20);
  return 0;
}