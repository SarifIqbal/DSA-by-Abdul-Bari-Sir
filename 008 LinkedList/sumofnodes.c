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
int add(struct Node *p)
{
    int sum = 0;
    while (p)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}
int recursiveadd(struct Node *p)
{
    if (p)
        return recursiveadd(p->next) + p->data;
    return 0;
}
int main()
{
    int A[5] = {3, 5, 7, 10, 15};
    create(A, 5);
    display(first);
    printf("Sum of nodes using iterative func: %d\n", add(first));
    printf("Sum of nodes using recursive func: %d\n", recursiveadd(first));
    return 0;
}