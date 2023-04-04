//1. Write a C++ program to demonstrate the addition of multiple types of data using\
generic functions or templates.
#include <iostream>
using namespace std;
template <class I, class F ,class G>
G add(I a, F b)
{
    return a + b;
}
int main()
{
    int sum1 = add<int, int,int>(2, 1);
    double sum4 = add<double, double,double>(2.5, 3.1);
    double sum2 = add<double, int,double>(2.5, 1);
    double sum3 = add<int, double,double>(2, 1.5);
    cout << "Total = " << sum1 << endl;
    cout << "Total = " << sum2 << endl;
    cout << "Total = " << sum3 << endl;
    cout << "Total = " << sum4 << endl;
    return 0;
}