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
void append(struct Array *arr, int value) // as it will modify the array so the
{                                         // structure should be of call by address type
    if (arr->length < arr->size)
        arr->A[arr->length] = value;
    arr->length++;
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    display(arr);
    append(&arr, 10);
    display(arr);
    return 0;
}