#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Node
{
    int coefficient;
    int exponent;
    struct Node *next;
} *poly = NULL;
void create()
{
    struct Node *t, *last;
    int i, num;
    printf("Enter number of terms: ");
    scanf("%d", &num);
    printf("Enter each term with coefficient and exponent\n");
    for (i = 0; i < num; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d%d", &t->coefficient, &t->exponent);
        t->next = NULL;
        if (poly == NULL)
            poly = last = t;
        else
        {
            last->next = t;
            last = t;
        }
    }
}
void display(struct Node *p)
{
    while (p)
    {
        printf("%dx%d + ", p->coefficient, p->exponent);
        p = p->next;
    }
    printf("\n");
}
long eval(struct Node *p, int x)
{
    long val = 0;
    while (p)
    {
        val += p->coefficient * pow(x, p->exponent);
        p = p->next;
    }
    return val;
}
int main()
{
    create();
    display(poly);
    printf("%ld\n", eval(poly, 1));
    return 0;
}