#include <iostream>
using namespace std;
int swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    return (x, y);
}
int swaping(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return (*x, *y);
}
int swapvalue(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    return (x, y);
}
int main()
{
    int a = 21, b = 11;
    cout << "Current value of A and B: " << a << " " << b << endl;
    swap(a, b);
    cout << "Swapping using Pass by Value: " << a << " " << b << endl;
    a = 21, b = 11;
    swaping(&a, &b);
    cout << "Swapping using Pass by Address: " << a << " " << b << endl;
    a = 21, b = 11;
    swapvalue(a, b);
    cout << "Swapping using Pass by Reference: " << a << " " << b << endl;
}
