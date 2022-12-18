//  Ascending and Descending Phase
#include <stdio.h>
void fun(int n)
{
    if (n > 0)
    {
        printf("%d ", n);       // Calling Time or Ascending Phase
        fun(n - 1);
        printf("%d ", n);       // Returning Time or Descending Phase
    }
}
int main()
{
    fun(3);
    return 0;
}