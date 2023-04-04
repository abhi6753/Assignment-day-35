// 4. Write a C++ Program to Swap data using function template.
#include <iostream>
using namespace std;
template<class T>
void swap(T *x,T *y)
{
  T  temp;
  temp = *x;
   *x = *y;
   *y = temp;
}
int main()
{
    int a,b;
    cout<<"Enter Value of a and b : "<<endl;
    cin>>a>>b;
    cout<<"Before swapping: "<<endl;
    cout<<"Value of a = "<<a<<endl;
    cout<<"Value of b = "<<b<<endl;
    swap<int>(&a,&b);
    cout<<"After swapping: "<<endl;
    cout<<"Value of a = "<<a<<endl;
    cout<<"Value of b = "<<b<<endl;
    return 0;
}