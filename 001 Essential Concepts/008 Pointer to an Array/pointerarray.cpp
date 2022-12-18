//Creating an Array in Heap
#include <iostream>
using namespace std;
int main()
{
    int *arr=new int[5];
    arr[0]=11; arr[1]=21; arr[2]=31; arr[3]=41; arr[4]=51;
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    delete [] arr;
    return 0;
}