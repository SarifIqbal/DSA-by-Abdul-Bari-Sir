#include <stdio.h>
int main()
{
    char name[21] = {'S', 'a', 'r', 'r', 'i', 'f', ' ', 'I', 'q', 'b', 'b', 'a', 'l'};
    printf("%s\n", name);

    char input[21];
    printf("Enter a name: ");
    scanf("%s", &input);
    printf("%s\n", input);
    fflush(stdin);

    char insert[21];
    printf("Enter a name: ");
    gets(insert);
    puts(insert);
    return 0;
}