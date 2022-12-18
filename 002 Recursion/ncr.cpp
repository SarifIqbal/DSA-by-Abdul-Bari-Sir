#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}
int ncr(int n, int r)
{
    int num, den;
    num = fact(n);
    den = fact(r) * fact(n - r);
    return num / den;
}
int recncr(int n, int r)
{
    if (r == 0 || n == r)
        return 1;
    return recncr(n - 1, r - 1) + recncr(n - 1, r);
}
int main()
{
    printf("%d\n", ncr(5, 2));
    printf("%d\n", recncr(5, 2));
    return 0;
}