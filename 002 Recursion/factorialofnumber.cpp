#include <iostream>
using namespace std;
int factorial(int fact)
{
    if (fact == 0 || fact == 1)
        return 1;
    else
        return fact * factorial(fact - 1);
}
int main()
{
    cout << "Enter a number: ";
    int fact;
    cin >> fact;
    if(fact < 0)
    {
        cout << "Wrong Input!!!" << endl;
        return 0;
    }
    cout << "The factorial of " << fact << " is: " << factorial(fact);
    return 0;
}