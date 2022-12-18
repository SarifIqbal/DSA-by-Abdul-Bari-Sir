#include <iostream>
using namespace std;
int main()          //accessing elements of array using
{                   //for each loop
    int A[7]={1,2,3,4,5,6,7};
    for(int x:A)
        cout<<x<<endl;
}