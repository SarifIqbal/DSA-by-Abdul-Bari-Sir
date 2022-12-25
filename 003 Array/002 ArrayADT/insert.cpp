// we can insert an element at the end of an array, but
// if we want to insert an element in between or at starting
// then we have to shift the elements one place ahead from the index
// at which we want to insert the element
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
void insert(struct Array *arr, int index, int value)
{
    if(index >= 0 && index <= arr->length)
    {
        for(int i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = value;
        arr->length++;
    }
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    display(arr);
    insert(&arr, 5, 11);
    display(arr);
    insert(&arr, 2, 21);
    display(arr);
    return 0;
}