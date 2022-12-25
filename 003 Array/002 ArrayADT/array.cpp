#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct ARRAY
{
    int *A; // using a pointer to point the memory for array in heap
    int size;
    int length;
};
struct array
{
    int A[20];
    int size;
    int length;
};
void display(struct ARRAY ARR)
{
    for (int i = 0; i < ARR.length; i++)
        printf("%d ", ARR.A[i]);
    cout << endl;
}
void display(struct array arr)
{
    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    cout << endl;
}
int main()
{
    struct ARRAY Arr;
    cout << "Enter the size of array: ";
    cin >> Arr.size;
    Arr.A = (int *)malloc(Arr.size * sizeof(int));
    cout << "Array of size " << Arr.size << " is created in heap section of memory" << endl;
    cout << "Enter the number of elements you want to enter: ";
    cin >> Arr.length;
    cout << "Now enter the elements:\n";
    for (int i = 0; i < Arr.length; i++)
        scanf("%d", &Arr.A[i]);
    cout << "Displaying all the elemts: ";
    display(Arr);
    struct array arr = {{11, 21, 31, 41, 51}, 20, 5};
    display(arr);
    return 0;
}