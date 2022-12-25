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
int binarysearch(struct Array arr, int key)
{
    int l = 0;
    int h = arr.length - 1;
    int mid;
    while (l <= h)
    {
        mid = ((l + h) / 2);
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else if (key > arr.A[mid])
            l = mid + 1;
    }
    return -1;
}
int main()
{
    struct Array arr = {{4, 8, 10, 15, 18, 21, 24, 27, 29, 33, 34, 37, 39, 41, 43}, 20, 15};
    display(arr);
    printf("Enter the element you want to search: ");
    int key;
    scanf("%d", &key);
    printf("Element found at index: %d\n", binarysearch(arr, key));
    return 0;
}