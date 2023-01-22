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
void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
void insert(int pos, int x)
{
    struct Node *t, *p;
    if (pos == 0)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        t->next = first;
        first = t;
    }
    else if (pos > 0)
    {
        p = first;
        for (int i = 0; i < pos - 1 && p; i++)
            p = p->next;
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}
int main()
{
    int A[5] = {3, 5, 7, 10, 15};
    create(A, 5); // creating using an array
    display(first);
    printf("Enter position and value: ");
    int pos, value;
    scanf("%d%d", &pos, &value);
    insert(pos, value); // creating using insert function
    display(first);
    insert(1, 11);
    insert(2, 21);
    insert(3, 41);
    insert(4, 51);
    display(first);
    return 0;
}