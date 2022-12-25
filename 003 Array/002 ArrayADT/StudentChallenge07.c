// Finding a pair of element with sum K
#include <stdio.h>
void display(int arr[], int size)
{
    printf("Elements are: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[10] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    display(arr, 10);
    int k = 10; // test element
    int n = 10; // size of array
    for (int i = 0; i < 10; i++)
        for (int j = i + 1; j < n - 1; j++)
            if (arr[i] + arr[j] == k)
                printf("%d + %d = %d\n", arr[i], arr[j], k);
    return 0;
}