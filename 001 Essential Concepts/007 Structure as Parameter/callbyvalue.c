#include <stdio.h>
// no need to pass length and breadth seperately
// you can pass the structure itself
// as the structure is carrying length and breadth so both will be passed

// a seperate object will be created for struct in area function
struct Rectangle
{
    int length;
    int breadth;
};
int area(struct Rectangle Rect)
{
    return Rect.length * Rect.breadth;
}
int main()
{
    struct Rectangle R = {21, 11};
    printf("Area of Rectangle is: %d", area(R));
    return 0;
}