#include <stdio.h>
// array's are only passed by address
// array's can't be passed by values at all
// array's are directly accessible by the fuction to whom they are passed

// a function can modify an actual parameter

// a is a pointer
//  [] this brackets after a means a is a pointer to an array

void func(int a[], int size)
{
    int i;
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    a[4] = 55;
    printf("\n%d", a[4]);
}

// you can also write int *a instead of int a[]
//*a will refer to a integer number
int main()
{
    int arr[5] = {11, 21, 31, 41, 51};
    func(arr, 5);
}