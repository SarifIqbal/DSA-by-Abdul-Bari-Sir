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
int sum(struct Array arr)
{
    int sum = 0;
    for (int i = 1; i < arr.length; i++)
        sum += arr.A[i];
    return sum;
}
int main()
{
    struct Array arr = {{4, 8, 10, 15, 18, 21, 24, 27, 3, 2, 34, 37, 1, 11, 19}, 20, 15};
    display(arr);
    cout << "the sum of array is: " << sum(arr);
    return 0;
}