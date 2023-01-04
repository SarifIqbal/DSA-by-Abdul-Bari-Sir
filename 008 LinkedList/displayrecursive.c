#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first = NULL;
void create(int A[], int size)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    // 0th element is already created so we will start the iteration from 1 onwards
    for (i = 1; i < size; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    printf("Linked List is created\n");
}
void RecursiveDisplay(struct Node *p)
{
    if (p != NULL)
    {
        printf("%d ", p->data);
        RecursiveDisplay(p->next);
    }
}
void ReverseRecursiveDisplay(struct Node *p)
{
    if (p != NULL)
    {
        ReverseRecursiveDisplay(p->next);
        printf("%d ", p->data);
    }
}
int main()
{
    int A[5] = {3, 5, 7, 10, 15};
    create(A, 5);
    RecursiveDisplay(first);
    printf("\ndisplaying in reverse\n");
    ReverseRecursiveDisplay(first);
    return 0;
}