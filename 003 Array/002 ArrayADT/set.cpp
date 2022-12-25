#include <iostream>
#include <stdio.h>
using namespace std;
struct Array
{
    int A[20];
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
void set(struct Array *arr, int index, int value)
{
    if (index >= 0 && index < arr->length)
        arr->A[index] = value;
}
int main()
{
    struct Array arr = {{4, 8, 10, 15, 18, 21, 24, 27, 29, 33, 34, 37, 39, 41, 43}, 20, 15};
    display(arr);
    set(&arr, 7, 1001);
    display(arr);
    return 0;
}