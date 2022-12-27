#include <stdio.h>
int main()
{
    char a[] = "triangle";
    char b[] = "integral";
    printf("String 1: %s\n", a);
    printf("String 2: %s\n", b);
    int size1 = sizeof(a) / sizeof(a[0]) - 1;
    int size2 = sizeof(b) / sizeof(b[0]) - 1;
    if (size1 != size2)
        printf("%s and %s are not anagram strings\n", a, b);
    else
    {
        int i, h[26] = {0};
        for (i = 0; a[i] != '\0'; i++)
            h[a[i] - 97]++;
        for (i = 0; b[i] != '\0'; i++)
        {
            h[b[i] - 97]--;
            if (h[b[i] - 97] < 0)
                printf("%s and %s are not anagram strings\n", a, b);
        }
        if (b[i] == '\0')
            printf("%s and %s are anagram strings\n", a, b);
    }
    return 0;
}