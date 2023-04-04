// 6. Write a C++ Program to find Sum of Array using function template.
#include <iostream>
using namespace std;
template <class T>
T sumOfArray(T arr[], T x)
{
    T total = 0;
    for (int i = 0; i < x; i++)
    {
        total += arr[i];
    }
    return total;
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Sum of array is : " << sumOfArray<int>(arr, 5)<<endl;
    double arr1[5] = {10, 20.56, 30.4, 40.3, 50};
    cout << "Sum of array is : " << sumOfArray<double>(arr1, 5);
    return 0;
}