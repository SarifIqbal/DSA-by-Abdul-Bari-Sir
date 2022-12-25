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
int Delete(struct Array *arr, int index)
{
    int deletedvalue = 0; // initially we are taking it as 0
    if (index >= 0 && arr->length)
    {
        deletedvalue = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
            arr->A[i] = arr->A[i + 1];
        arr->length--;
        return deletedvalue;
    }
    return deletedvalue;
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    display(arr);
    cout << "Deleted Element: " << Delete(&arr, 3) << endl;
    display(arr);
    return 0;
}