#include <iostream>
using namespace std;
int * funarray(int n)
{
    int *p;
    p= new int(n);  // for C: p = (int *) malloc (n * sizeof(int));
    for (int i=0; i<5; i++)
        p[i]=i;
    return p;
}
int main()
{
    int *a;
    a = funarray(5);
    for (int i=0; i<5; i++)
        cout<<a[i]<<" ";
}

//once the work of the function funarray is over p is gone 
//but a is pointing to the array in heap