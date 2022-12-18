#include <iostream>
using std::cout;
using std::endl;
// or else i can write using namespace std;
int main()
{
    int Arr[5];
    cout<<sizeof(Arr)<<endl;    //declaration of array
    Arr[0]=11;                  //initialization of array
    Arr[1]=21;
    Arr[2]=31;
    Arr[3]=41;
    Arr[4]=51;                  //if i don't initialize the 5th element then
    for (int i=0;i<5;i++)       //it contain garbage value
        cout<<Arr[i]<<endl;
    return 0;
}