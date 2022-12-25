// Finding missing element in an Array
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
    int arr[] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
    int l = 1, n = 10, h = 12;
    int H[12] = {0};
    display(arr, n);
    for (int i = 0; i < n; i++)
        H[arr[i]]++;
    printf("Missing elements: ");
    for (int i = 0; i < h; i++)
        if (H[i] == 0)
            printf("%d ", i);
    return 0;
}