#include <stdio.h>
struct Rectangle
{
    int length;
    int breadth;
}r1;

int area(int a, int b)
{
    return a*b;
}
int main()
{
    printf("Size of Rectangle structure in bytes: %d\n", sizeof(r1));
    struct Rectangle r1={10, 5};
    printf("The area is: %d\n", area(r1.length, r1.breadth));
    struct Rectangle *p = &r1;
    r1.length = 21;             //normally changing the value of the variable 
    (*p).breadth = 11;          //changing the value of variable using a pointer
    printf("The area is: %d", area(r1.length, r1.breadth));
    return 0;
}