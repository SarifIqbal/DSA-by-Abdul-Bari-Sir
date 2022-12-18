#include <iostream>
#include <stdio.h>
double e(int x, int n) // x is power of e & n is number of terms
{
    static double s = 1;
    if (n == 0)
        return s;
    s = 1 + (double)x / (double)n * s; // we can also write 1 + x * s / n
    return e(x, n - 1);
}
double iterative(int x, int n)
{
    double s = 1;
    int i;
    double num = 1;
    double den = 1;
    for (i = 1; i <= n; i++)
    {
        num = num * x;
        den = den * i;
        s = s + num / den;
    }
    return s;
}
int main()
{
    printf("%lf\n", e(1, 11));
    printf("%lf\n", iterative(1, 11));
    return 0;
}