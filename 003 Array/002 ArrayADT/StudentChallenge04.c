// Finding duplicates in a sorted array
// Counting duplicates in a sorted array
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
    int lastDuplicate = 0;
    display(arr, 10);
    printf("Duplicate elements: ");
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i] != lastDuplicate)
        {
            printf("%d ", arr[i]);
            lastDuplicate = arr[i];
        }
    }
    int j;
    printf("\nCounting Duplicates:\n");
    for (int i = 0; i < 10 - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            j = i + 1;
            while (arr[j] == arr[i])
                j++;
            printf("%d is appearing %d times\n", arr[i], j - i);
            i = j - 1;
        }
    }
    return 0;
}