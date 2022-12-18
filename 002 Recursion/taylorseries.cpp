#include <iostream>
#include <stdio.h>
double e(int x, int n) // x is power of e & n is number of terms
{
    static double p = 1, f = 1; // p is power & f is factorial
    double r;                   // r is result of summation
    if (n == 0)
        return 1;
    r = e(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}
int main()
{
    printf("%lf\n", e(1, 11));
    return 0;
}