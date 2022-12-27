#include <stdio.h>
int main()
{
    char a[] = "finding";
    printf("String: %s\n", a);
    int h = 0, x = 0;
    printf("Duplicate elements are: ");
    for(int i = 0; a[i] != '\0'; i++)
    {
        x = 1;
        x = x << (a[i] - 97);
        if((x & h) > 0)
            printf("%c ", a[i]);
        else
            h = h | x;
    }
}