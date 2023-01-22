#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first = NULL;
void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
void insertlast(struct Node *p, int x)
{
    struct Node *t;
    struct Node *last;
    // last = (struct node*)malloc(sizeof(struct node));
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;
    if (first == NULL)
    {
        first = last = t;
    }
    else
    {
        last = p;
        while (last->next)
            last = last->next;
        last->next = t;
        last = t;
    }
}
int main()
{
    printf("Creating Linked List !!\n");
    insertlast(first, 11);
    insertlast(first, 21);
    insertlast(first, 31);
    insertlast(first, 41);
    insertlast(first, 51);
    display(first);
    return 0;
}