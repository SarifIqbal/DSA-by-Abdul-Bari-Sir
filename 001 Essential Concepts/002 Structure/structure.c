#include <stdio.h>
struct Rectangle
{
    int length;
    int breadth;
} R1; // declaration of R1
int main()
{
    struct Rectangle R1 = {10, 5};  // initializaton of R1
    struct Rectangle R2 = {21, 11}; // declaration & initialization of R2
    printf("Length and Breadth of R1: %d %d\n", R1.length, R1.breadth);
    printf("Length and Breadth of R2: %d %d\n", R2.length, R2.breadth);
    struct Rectangle R3;    //declaration of R3
    R3.length=100;  //initialization of length
    R3.breadth=50;  //and breadth of R3
    printf("Length and Breadth of R3: %d %d\n", R3.length, R3.breadth);
    return 0;
}