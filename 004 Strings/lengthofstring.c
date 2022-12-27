#include <stdio.h>
int main()
{
    char s[] = "Welcome";
    int i;
    for(i = 0; s[i] != '\0'; i++);
    printf("Length of string is: %d", i);
    return 0;
}