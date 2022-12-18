//we can't pass an array by call by value
//but we can pass a structure by call by value
//we can also pass a structure by call by value carrying an array in it
#include <stdio.h>
struct test
{
    int A[5];
    int n;
};
void fun(struct test t1)
{
    for(int i=0;i<5;i++)
        printf("%d ", t1.A[i]);
}
int main()
{
    struct test t={{95,96,97,98,99},5};
    fun(t);
}