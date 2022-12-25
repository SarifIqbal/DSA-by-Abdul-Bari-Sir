// Finding duplicate element in sorted array using hasing technique
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
    int arr[10] = {3, 6, 8, 8, 10, 12, 16, 16, 16, 20};
    display(arr, 10);
    int H[21] = {0};
    for (int i = 0; i < 10; i++)
        H[arr[i]]++;
    for (int i = 0; i <= 20; i++)
        if (H[i] > 1)
            printf("%d is appearing %d times\n", i, H[i]);
}