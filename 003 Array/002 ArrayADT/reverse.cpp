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
void reversemethodfirst(struct Array *arr)
{
    int *B;
    B = (int *)malloc(arr->length*sizeof(int));
    for (int i = arr->length - 1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i];
    for (int i = 0; i < arr->length; i++)
        arr->A[i] = B[i];
}
void reversemethodsecond(struct Array *arr)
{
    for (int i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        int temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}
int main()
{
    struct Array arr = {{4, 8, 10, 15, 18, 21, 24, 27, 3, 2, 34, 37, 1, 11, 19}, 20, 15};
    display(arr);
    cout << "Printing the reversed array: " << endl;
    reversemethodfirst(&arr);
    display(arr);
    cout << "Reversing the array again using different approach: " << endl;
    reversemethodsecond(&arr);
    display(arr);
    return 0;
}