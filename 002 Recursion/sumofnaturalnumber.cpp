#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return sum(n - 1) + n;
}
int add(int n)
{
    if(n > 0)
        return sum(n - 1) + n;
    return 0;
}
int main()
{
    printf("Enter a naturl number to find sum: ");
    int n;
    scanf("%d", &n);
    printf("The sum till %d using sum function is: %d\n", n, sum(n));
    printf("The sum till %d using add function is: %d\n", n, add(n));
    return 0;
}