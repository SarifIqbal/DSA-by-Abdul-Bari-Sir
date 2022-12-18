//Creating an Array in Heap
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    arr=(int *)malloc(5*sizeof(int));
    arr[0]=11; arr[1]=21; arr[2]=31; arr[3]=41; arr[4]=51;
    for(int i=0;i<5;i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}