#include <stdio.h>
int main()
{
    char a[] = "Painter";
    char b[] = "Painting";
    int i, j;
    for (i = 0, j = 0; a[i] != '\0' && b[j] != '\0'; i++, j++)
        if (a[i] != b[j])
            break;
    if (a[i] == b[j])
        printf("%s is equal to %s", a, b);
    else if (a[i] < b[j])
        printf("%s is smaller than %s", a, b);
    else
        printf("%s is greater than %s", a, b);
    return 0;
}