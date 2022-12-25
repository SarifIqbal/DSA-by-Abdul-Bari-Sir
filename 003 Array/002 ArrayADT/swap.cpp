#include <iostream>
#include <stdio.h>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
void display(struct Array arr)
{
    int i;
    printf("Elements are: ");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    cout << endl;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    display(arr);
    swap(&arr.A[2], &arr.A[3]);
    display(arr);
    return 0;
}