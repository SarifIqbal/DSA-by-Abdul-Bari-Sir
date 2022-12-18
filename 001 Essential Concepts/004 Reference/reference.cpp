#include <iostream>
using namespace std;
int main()
{
    int a=11;
    int &b=a;                 //reference variable should always be
    cout<<a<<" "<<b<<endl;    //initialized while declaration
    b=21;                     //as value of b is changed then value of a
    cout<<a<<" "<<b<<endl;    //will also change because b is an alias to a
    return 0;
}