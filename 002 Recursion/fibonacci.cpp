#include <iostream>
using namespace std;
int fibo(int n) // 0 1 1 2 3 5 8 13 21 34 55 ...
{
    if (n < 2)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    printf("%d", fibo(5));
}