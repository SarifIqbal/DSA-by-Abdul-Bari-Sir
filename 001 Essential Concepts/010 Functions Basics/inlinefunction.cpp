#include <iostream>
using namespace std;
// the compiler places a copy of the code of that
// function at each point where the function is called at compile time
inline int product(int a, int b)
{
    return (a * b);
}
// when the function has to do less work then use inline function
// when you use inline function for longer operations then the cache will
// be filled and there will be less space for execution of the program
// and the program will crash
//inline functions should not be used in recursive functions
int main()
{
    int a = 11, b = 21;
    cout << "The Sum is: " << product(a, b);
    return 0;
}