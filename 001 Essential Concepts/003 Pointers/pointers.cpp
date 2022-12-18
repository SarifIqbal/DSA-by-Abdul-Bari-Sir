#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int *p;
    p=arr; //or p=arr[0];
    cout<<"The address of Array: "<<(int)arr<<"  "<<(int)p<<endl;
    cout<<"First element: "<<arr[0]<<"  "<<*p<<"  "<<p[0]<<endl;
    cout<<"Second element: "<<arr[1]<<"  "<<p[1]<<endl;
    return 0;
}