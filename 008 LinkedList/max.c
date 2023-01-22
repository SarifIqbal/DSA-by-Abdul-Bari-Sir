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
int max(struct Node *p)
{
    int m = INT_MIN;
    while (p)
    {
        if (p->data > m)
            m = p->data;
        p = p->next;
    }
    return m;
}
int recursionmax(struct Node *p)
{
    int m = INT_MIN;
    if (!p)
        return m;
    m = recursionmax(p->next);
    if(m > p->data)
        return m;
    else    // else can also be neglected here
        return p->data;
}
int main()
{
    int A[5] = {3, 25, 7, 40, 15};
    create(A, 5);
    display(first);
    printf("The maximum element in the list is: %d\n", max(first));
    printf("The maximum element in the list is: %d\n", recursionmax(first));
    return 0;
}