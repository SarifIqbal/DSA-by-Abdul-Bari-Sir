// Finding max and min in a single scan
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
    int arr[10] = {5, 8, 3, 9, 6, 2, 10, 7, -1, 4};
    int min = arr[0], max = arr[0];
    int n = 10; // size of array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        else if (arr[i] > max)
            max = arr[i];
    }
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    return 0;
}