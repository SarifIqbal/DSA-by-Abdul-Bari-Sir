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
struct Node *search(struct Node *p, int key)
{
    while (p)
    {
        if (key == p->data)
            return p;
        p = p->next;
    }
    return NULL;
}
struct Node *recursionsearch(struct Node *p, int key)
{
    if (!p)
        return NULL;
    if (key == p->data)
        return p;
    return recursionsearch(p->next, key);
}
struct Node *improvedsearch(struct Node *p, int key)
{
    struct Node *q = NULL;
    while (p)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
        }
        q = p;
        p = p->next;
    }
}
int main()
{
    int A[8] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    printf("Displaying Linked List: ");
    display(first);
    struct Node *find;
    find = search(first, 10);
    if (find)
        printf("Key is found %d, using iterative approach\n", find->data);
    else
        printf("Key not found\n");
    find = recursionsearch(first, 10);
    if (find)
        printf("Key is found %d, using recursive approach\n", find->data);
    else
        printf("Key not found\n");
    find = improvedsearch(first, 10);
    if (find)
        printf("Key is found %d, using improved iterative approach\n", find->data);
    else
        printf("Key not found\n");
    printf("Displaying Linked List after move to head operation: ");
    display(first);
    return 0;
}