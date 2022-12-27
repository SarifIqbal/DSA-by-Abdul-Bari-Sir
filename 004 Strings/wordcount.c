#include <stdio.h>
int main()
{
    char a[] = "How are you";
    int i, word = 0;
    for (i = 0; a[i] != '\0'; i++)
        if (a[i] == ' ')
            word++;
    printf("Number of words: %d", word + 1);
    return 0;
}