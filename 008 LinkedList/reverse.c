#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first = NULL;
int count(struct Node *p)
{
    int length = 0;
    while (p != 0)
    {
        length++;
        p = p->next;
    }
    return length;
}
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
void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
void reverse1(struct Node *p)
{
    p = first;
    int i = 0;
    int length = count(first);
    int A[length];
    while (p != NULL)
    {
        A[i++] = p->data;
        p = p->next;
    }
    p = first;
    i--;
    while (p != NULL)
    {
        p->data = A[i--];
        p = p->next;
    }
    display(first);
}
void reverse2(struct Node *p)
{
    p = first;
    struct Node *q = NULL, *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next; // moving to next node
        q->next = r; // linking to previous node
    }
    first = q; // last node is now the first node i.e. linked list is reversed
    display(first);
}
void reverse3(struct Node *q, struct Node *p)
{
    if (p != NULL)
    {
        reverse3(p, p->next);
        p->next = q;
    }
    else
        first = q;
}
int main()
{
    int A[5] = {10, 20, 30, 40, 50};
    create(A, 5);
    display(first);
    reverse1(first);       // reversing the linked list
    reverse2(first);       // reversing the linked list again
    reverse3(NULL, first); // reversing the linked list
    display(first);
    return 0;
}