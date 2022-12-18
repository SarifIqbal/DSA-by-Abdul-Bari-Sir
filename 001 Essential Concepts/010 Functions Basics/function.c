#include <stdio.h>

int add(int a, int b)
{
    return (a+b);
}

int main()
{
    int x, y;
    x=11;
    y=21;
    int sum=add(x,y);
    printf("The sum is: %d", sum);
}