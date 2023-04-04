//5. Write a C++ Program to Add two numbers using function template.
#include<iostream>
using namespace std;
template<class T,class F,class G>
G sum(T x,F y)
{
 return x+y;
}

int main()
{
  cout<<"Total = "<<sum<int,int,int>(10,20)<<endl;
  cout<<"Total = "<<sum<int,double,double>(10,20.5)<<endl;
  cout<<"Total = "<<sum<double,int,double>(20.5,10)<<endl;
  cout<<"Total = "<<sum<double,double,double>(10.5,20.5)<<endl;
  return 0;
}