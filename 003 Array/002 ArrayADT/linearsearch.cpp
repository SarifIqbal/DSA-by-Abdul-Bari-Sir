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
int linearsearch(struct Array arr, int key)
{
    for(int i = 0; i < arr.length; i++)
        if(key == arr.A[i])
            return i;
    return -1;
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    display(arr);
    cout << "If index is -1 that means that the element is not present in the array: " << endl;
    cout << "The element 4 is at index: " << linearsearch(arr, 4) << endl;
    cout << "The element 21 is at index: " << linearsearch(arr, 21) << endl;
    return 0;
}