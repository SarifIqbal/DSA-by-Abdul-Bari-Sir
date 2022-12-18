#include <iostream>
using namespace std;
void funA(int); // declaration
void funB(int); // declaration
void funA(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        funB(n - 1);
    }
}
void funB(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        funA(n/2);
    }
}
int main()
{
    funA(20);
    return 0;
}