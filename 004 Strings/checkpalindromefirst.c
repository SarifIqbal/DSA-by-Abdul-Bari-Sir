// checking by reverse and compare
#include <stdio.h>
int main()
{
    char a[] = "nitin";
    printf("String: %s\n", a);
    int size = (sizeof(a) / sizeof(a[0])) - 1;
    char b[size];
    int i, j;
    for (i = 0; a[i] != '\0'; i++)
        ;
    i = i - 1;
    for (j = 0; i >= 0; i--, j++)
        b[j] = a[i];
    b[j] = '\0';
    printf("Reverse: %s\n", b);
    for (i = 0, j = 0; a[i] != '\0' && b[j] != '\0'; i++, j++)
        if (a[i] != b[j])
            break;
    if (i == size && j == size)
        printf("Palindrome String");
    else
        printf("Not Palindrome");
}