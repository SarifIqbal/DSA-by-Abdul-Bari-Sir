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
void insertsort(struct Array *arr, int element)
{
    int i = arr->length - 1;
    while(arr->A[i] > element)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = element;
    arr->length++;
}
int main()
{
    struct Array arr = {{2, 3, 7, 9, 11}, 10, 5};
    display(arr);
    int element;
    cout << "Enter a number in between an array: ";
    cin >> element;
    insertsort(&arr, element);
    display(arr);
    return 0;
}