#include <stdio.h>
int main()
{
    char a[] = "python";
    printf("%s\n", a);
    char b[7];
    int i, j;
    for (i = 0; a[i] != '\0'; i++);
    i = i - 1;
    for (j = 0; i >= 0; i--, j++)
        b[j] = a[i];
    b[j] = '\0';
    printf("%s\n", b);
}