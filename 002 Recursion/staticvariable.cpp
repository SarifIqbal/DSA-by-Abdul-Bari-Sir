// as x is a static variable so it will be 5 everytime
// while the recursive function is in descending phase

// there is only one single copy of x so each call will
// use that copy only
// in the end of ascending of calling phase it was having value 5
// so 5 is used everytime in descending phase
// it's having same value in each call
// in earlier program n has different value in each call

#include <iostream>
using namespace std;
int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}
int main()
{
    int a = 5;
    printf("Output: %d ", fun(a));
    return 0;
}