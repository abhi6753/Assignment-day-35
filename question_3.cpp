// 3. Write a C++ program to find the largest of three elements using a template.
#include <iostream>
using namespace std;
template <class T, class F, class G>
G myMax(T x, F y, G z)
{
    return x > y ? x > z ? x : z : y > z ? y : z;
}
int main()
{
    cout << "Maximum = " << myMax<int, int, int>(3, 4, 5) << endl;
    cout << "Maximum = " << myMax<double, double, double>(34.5, 98.32, 78.3) << endl;
    cout << "Maximum = " << myMax<int, double, double>(34, 4.5, 5) << endl;
    cout << "Maximum = " << myMax<double, int, double>(5.4, 4, 0.7) << endl;
    return 0;
}