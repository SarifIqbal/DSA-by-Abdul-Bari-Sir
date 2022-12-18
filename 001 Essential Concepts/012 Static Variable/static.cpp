#include <iostream>
using namespace std;
void staticfunc()
{
    static int i = 1;  // the value of i remains in the memory till
    cout << i << endl; // the execution of the program ends..
    i += 10;
}
int main()
{
    staticfunc();
    staticfunc();
    staticfunc();
}