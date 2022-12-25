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
int get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}
int main()
{
    struct Array arr = {{4, 8, 10, 15, 18, 21, 24, 27, 29, 33, 34, 37, 39, 41, 43}, 20, 15};
    display(arr);
    cout << "at index 7: " << get(arr, 7);
    return 0;
}