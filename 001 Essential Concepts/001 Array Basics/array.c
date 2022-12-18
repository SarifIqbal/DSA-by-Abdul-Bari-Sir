#include <stdio.h>
int main()
{
    int A[7]={1,2,3,4,5,6,7};
    printf("%d\n", sizeof(A));     //if we don't give last element
    for (int i=0;i<7;i++)          //it will be initialized as 0
    {
        printf("%d ", A[i]);
    }
    return 0;
}

//we can skip giving the size of array if we have initialized the elements