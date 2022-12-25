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
int min(struct Array arr)
{
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++)
        if (arr.A[i] < min)
            min = arr.A[i];
    return min;
}
int main()
{
    struct Array arr = {{4, 8, 10, 15, 18, 21, 24, 27, 3, 2, 34, 37, 1, 11, 19}, 20, 15};
    display(arr);
    cout << "the smallest element is: " << min(arr);
    return 0;
}