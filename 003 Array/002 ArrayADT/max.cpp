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
int max(struct Array arr)
{
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++)
        if (arr.A[i] > max)
            max = arr.A[i];
    return max;
}
int main()
{
    struct Array arr = {{4, 8, 10, 15, 18, 21, 24, 27, 29, 33, 34, 37, 39, 41, 43}, 20, 15};
    display(arr);
    cout << "the greatest element is: " << max(arr);
    return 0;
}