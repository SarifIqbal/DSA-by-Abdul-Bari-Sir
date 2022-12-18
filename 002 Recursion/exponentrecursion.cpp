#include <iostream>
using namespace std;
int pow(int m, int n)
{
    if (m == 0)
        return 0;
    if (n == 0)
        return 1;
    else
        return pow(m, n - 1) * m;
}
int power(int m, int n)
{
    if (m == 0)
        return 0;
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return power((m * m), (n / 2));
    else
        return power((m * m), ((n - 1) / 2)) * m;
}
int main()
{
    printf("%d\n", pow(2, 5));
    printf("%d", power(2, 5));
    return 0;
}