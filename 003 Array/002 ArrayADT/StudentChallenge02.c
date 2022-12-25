// Finding multiple missing elements in an array
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
    int arr[11] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};
    display(arr, 11);
    int n = 11;
    int diff = 6 - 0;
    printf("Missing elements: ");
    for(int i = 0; i < n; i++)
    {
        if(arr[i] - i != diff)
        {
            while(diff < arr[i] - i)
            {
                printf("%d ", i + diff);
                diff++;
            }
        }
    }
    return 0;
}