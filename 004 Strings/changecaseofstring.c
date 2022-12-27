#include <stdio.h>
int main()
{
    char a[] = "WELCOME";
    int i;
    for (i = 0; a[i] != '\0'; i++)
        a[i] += 32;
    printf("%s", a);
    return 0;
}