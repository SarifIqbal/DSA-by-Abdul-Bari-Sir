#include <stdio.h>
int main()
{
    char name1[10] = {'J', 'o', 'h', 'n', '\0'};
    char name2[] = {'J', 'o', 'h', 'n', '\0'};
    char name3[] = "John";
    printf("%s\n", name1);
    printf("%s\n", name2);
    printf("%s\n", name3);
    return 0;
}