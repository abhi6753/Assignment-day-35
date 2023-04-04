// 2. Write a C++ Program to find Largest among two numbers using function template.
#include <iostream>
using namespace std;
template <class T, class F>
F myMax(T x, F y)
{
    return x > y ? x : y;
}
int main()
{
    cout << "Maximum = " << myMax<int, int>(3, 4) << endl;
    cout << "Maximum = " << myMax<double, double>(34.5, 4.32) << endl;
    cout << "Maximum = " << myMax<int, double>(34, 4.5) << endl;
    cout << "Maximum = " << myMax<double, int>(5.4, 4) << endl;
    return 0;
}
