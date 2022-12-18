// Recursion is a function which calls itself
// until it meets a base condition..

#include <iostream>
using namespace std;
int factorial(long unsigned int n)
{
    if ( n <= 1)
        return 1;
    return n * factorial( n - 1 );
}
int main()
{
    long unsigned int n;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<"The Factorial of "<<n<<" is "<<factorial(n);
    return 0;
}