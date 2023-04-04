// 7. Write a C++ Program of Templated class derived from Non-templated class.
#include <iostream>
using namespace std;
class Calculator
{
protected:
    int a, b;
    Calculator(int x, int y)
    {
        a = x;
        b = y;
    }
};
template <class T>
class Add : public Calculator
{
public:
    Add(int x, int y) : Calculator(x, y) {}
    T add()
    {
        return a + b;
    }
};
int main()
{
    Add<int> a1(10, 20);
    cout << "Total = " << a1.add();
    return 0;
}
