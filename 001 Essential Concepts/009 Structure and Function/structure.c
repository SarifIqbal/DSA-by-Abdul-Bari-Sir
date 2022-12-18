#include <stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};
void initialize(struct Rectangle *R, int l, int b)
{
    (*R).length=21;
    (*R).breadth=7;
}
int area(struct Rectangle *r)
{
    return (*r).length * (*r).breadth;
}
void changebreadth(struct Rectangle *r, int b)
{
    (*r).breadth=b;
}
int main()
{
    struct Rectangle r1;
    initialize(&r1, 21, 7);
    printf("The area before change is: %d\n", area(&r1));
    changebreadth(&r1, 11);
    printf("The area after change is: %d\n", area(&r1));
}