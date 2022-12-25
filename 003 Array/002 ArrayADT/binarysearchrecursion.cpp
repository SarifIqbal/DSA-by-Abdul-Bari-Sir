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
int binarysearchrecursion(struct Array arr, int l, int h, int key)
{
    if (l <= h)
    {
        int mid = ((l + h) / 2);
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            return binarysearchrecursion(arr, l, mid - 1, key);
        else if (key > arr.A[mid])
            return binarysearchrecursion(arr, mid + 1, h, key);
    }
    return -1;
}
int main()
{
    struct Array arr = {{4, 8, 10, 15, 18, 21, 24, 27, 29, 33, 34, 37, 39, 41, 43}, 20, 15};
    display(arr);
    int key;
    printf("Enter the element you want to search: ");
    scanf("%d", &key);
    int l = 0;
    int h = arr.length - 1;
    printf("Element found at index: %d\n", binarysearchrecursion(arr, l, h, key));
    return 0;
}