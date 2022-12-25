// Finding single missing element in an array
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
    int arr1[11] = {1, 2, 3, 4, 5, 6 , 8, 9, 10, 11, 12};
    display(arr1, 11);
    printf("Finding missing element...\n");
    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        sum = sum + arr1[i];
    }
    int s, n = 12;       // 12 is the last element in the array
    s = n * (n + 1) / 2; // sum of n natural numbers
    printf("Missing element is: %d\n", s - sum);

    int arr2[11] = {6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17};
    display(arr2, 11);
    int l = arr2[0];
    int h = arr2[11];
    n = 12 - 1;
    int diff = l - 0;   //difference between element and index;
    for(int i = 0; i < n; i++)
    {
        if(arr2[i] - i != diff)
        {
            printf("Missing element is: %d\n", i + diff);
            break;
        }
    }
    return 0;
}