#include <stdio.h>
int main()
{
    char a[] = "NITIN";
    int size = (sizeof(a) / sizeof(a[0])) - 1;
    printf("String: %s\n", a);
    char t;
    int i, j;
    for (j = 0; a[j] != '\0'; j++);
    j = j - 1;
    for (i = 0; i < j; i++, j--)
        if (a[i] != a[j])
            break;
    if(i >= j)
        printf("Palindrome String");
    else
        printf("Not Palindrome");
}