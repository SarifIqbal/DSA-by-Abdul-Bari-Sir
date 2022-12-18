#include <stdio.h>
int main()
{
    int a = 10, *p; // we can also write int *p=&a
    p = &a;         // at the time of declaration also
    printf("Value of a: %d\n", a);
    printf("Value of a: %d\n", *p);
    printf("Address of a: %d\n", &a);
    printf("Address of a: %d\n", p);
    return 0;
}