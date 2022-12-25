// Finding a pair of element with sum K in a sorted array
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
    int arr[10] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    int k = 10; // test element
    int n = 10; // size of array
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == k)
        {
            printf("%d + %d = %d\n", arr[i], arr[j], k);
            i++;
            j--;
        }
        else if (arr[i] + arr[j] < k)
            i++;
        else
            j--;
    }
    return 0;
}