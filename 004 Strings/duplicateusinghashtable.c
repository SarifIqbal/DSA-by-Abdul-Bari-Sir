#include <stdio.h>
int main()
{
    char a[] = "finding";
    printf("String: %s\n", a);
    int h[26] = {0}, i;
    for (i = 0; a[i] != '\0'; i++)
        h[a[i] - 97]++;
    printf("Duplicate elements are:\n");
    for (i = 0; i < 26; i++)
        if (h[i] > 1)
            printf("%c is appearing %d times\n", i + 97, h[i]);
    return 0;
}