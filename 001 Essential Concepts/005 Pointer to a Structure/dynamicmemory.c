#include <stdio.h>
#include <stdlib.h>
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle *p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    (*p).length=11;
    (*p).breadth=21;
    printf("Lenght: %d\n",(*p).length);
    printf("Breadht: %d\n",(*p).breadth);
}