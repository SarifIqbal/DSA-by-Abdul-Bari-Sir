// Finding duplicates in an Unsorted Array
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
    int arr[10] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int n = 10;
    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == -1 || arr[j] == -1)
                break;
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;
            }
        }
        if (count > 1)
            printf("%d is appearing %d times\n", arr[i], count);
    }
    return 0;
}