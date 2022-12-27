#include <stdio.h>
int main()
{
    char a[] = "WeLCoMe";
    printf("%s\n", a);
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 65 && a[i] <= 'Z')
            a[i] += 32;
        else if (a[i] >= 'a' && a[i] <= 122)
            a[i] -= 32;
    }
    printf("%s", a);
    return 0;
}