#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
} *root = NULL;
void InsertBST(int key)
{
    struct Node *t = root;
    struct Node *r, *p;
    if (root == NULL)
    {
        p = (struct Node *)malloc(sizeof(struct Node));
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }
    while (t != NULL)
    {
        r = t;
        if (key < t->data)
            t = t->lchild;
        else if (key > t->data)
            t = t->rchild;
        else
            return;
    }
    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = key;
    p->lchild = p->rchild = NULL;
    if (key < r->data)
        r->lchild = p;
    else
        r->rchild = p;
}
void InorderBST(struct Node *p)
{
    if (p)
    {
        InorderBST(p->lchild);
        printf("%d ", p->data);
        InorderBST(p->rchild);
    }
}
struct Node *SearchBST(int key)
{
    struct Node *t = root;
    while (t != NULL)
    {
        if (key == t->data)
            return t;
        else if (key < t->data)
            t = t->lchild;
        else
            t = t->rchild;
    }
    return NULL;
}
int main()
{
    InsertBST(10);
    InsertBST(5);
    InsertBST(20);
    InsertBST(8);
    InsertBST(30);
    printf("\nInorder: ");
    InorderBST(root);
    struct Node *temp = SearchBST(0);
    if (temp != NULL)
        printf("\nElement %d found\n", temp->data);
    else
        printf("\nElement not found\n");
    return 0;
}