// execution at calling time or
// at returning time
#include <iostream>
using namespace std;
void fun1(int n)
{
    if (n > 0)
    {
        printf("%d ", n);           //Ascending
        fun1(n - 1);
    }
}
void fun2(int n)
{
    if (n > 0)
    {
        fun2(n - 1);
        printf("%d ", n);           //Descending
    }
}
int main()
{
    cout << "Execution at calling time: ";
    fun1(3);
    cout << "\n";
    cout << "Execution at returning time: ";
    fun2(3);
    return 0;
}