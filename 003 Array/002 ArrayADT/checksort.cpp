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
bool checksort(struct Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
        if (arr.A[i] > arr.A[i + 1])
            return false;
    return true;
}
int main()
{
    struct Array arr1 = {{2, 3, 7, 9, 11}, 10, 5};
    display(arr1);
    cout << "The array is sorted: " << checksort(arr1) << endl;
    struct Array arr2 = {{1, 2, 3, 5, 4}, 10, 5};
    display(arr2);
    cout << "The array is sorted: " << checksort(arr2) << endl;
    return 0;
}