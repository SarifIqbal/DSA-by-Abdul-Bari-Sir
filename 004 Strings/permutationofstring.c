#include <stdio.h>
void method1(char s[], int k)
{
    static int a[10] = {0};
    static char res[10];
    int i;
    if (s[k] == '\0')
    {
        res[k] = '\0';
        printf("%s\n", res);
    }
    else
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            if (a[i] == 0)
            {
                res[k] = s[i];
                a[i] = 1;
                method1(s, k + 1);
                a[i] = 0;
            }
        }
    }
}
void swap(char *x, char *y)
{
    char temp;
    temp = *y;
    *y = *x;
    *x = temp;
}
void method2(char s[], int l, int h)
{
    int i;
    if (l == h)
        printf("%s\n", s);
    else
    {
        for (i = l; i <= h; i++)
        {
            swap(&s[l], &s[i]);
            method2(s, l + 1, h);
            swap(&s[l], &s[i]);
        }
    }
}
int main()
{
    char s[] = "ABC";
    printf("Original String: %s\n", s);
    printf("Permutations of %s using first method are:\n", s);
    method1(s, 0);
    printf("\n\n");
    printf("Permutations of %s using second method are:\n", s);
    method2(s, 0, 2);
    return 0;
}