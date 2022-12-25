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
void rearrange(struct Array *arr)
{
    int i = 0;
    int j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
            swap(arr->A[i], arr->A[j]);
    }
}
int main()
{
    struct Array arr = {{-3, 4, 8, -2, -6, -7, 0, -2, 9, -5}, 15, 10};
    display(arr);
    cout << "Array after rearranging the elements: " << endl;
    rearrange(&arr);
    display(arr);
    return 0;
}