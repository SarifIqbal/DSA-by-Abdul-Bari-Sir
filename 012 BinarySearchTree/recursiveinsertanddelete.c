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
struct Node *RecursiveInsertBST(struct Node *p, int key)
{
    struct Node *t = NULL;
    if (p == NULL)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if (key < p->data)
        p->lchild = RecursiveInsertBST(p->lchild, key);
    else if (key > p->data)
        p->rchild = RecursiveInsertBST(p->rchild, key);
    return p;
}
int HeightBST(struct Node *p)
{
    int x, y;
    if (p == NULL)
        return 0;
    x = HeightBST(p->lchild);
    y = HeightBST(p->rchild);
    return x > y ? x + 1 : y + 1;
}
struct Node *InPre(struct Node *p)
{
    while (p && p->rchild != NULL)
        p = p->rchild;
    return p;
}
struct Node *InSucc(struct Node *p)
{
    while (p && p->lchild != NULL)
        p = p->lchild;
    return p;
}
struct Node *RecursiveDelete(struct Node *p, int key)
{
    struct Node *q;
    if (p == NULL)
        return NULL;
    if (p->lchild == NULL && p->rchild == NULL)
    {
        if (p == root)
            root = NULL;
        free(p);
        return NULL;
    }
    if (key < p->data)
        p->lchild = RecursiveDelete(p->lchild, key);
    else if (key > p->data)
        p->rchild = RecursiveDelete(p->rchild, key);
    else
    {
        if (HeightBST(p->lchild) > HeightBST(p->rchild))
        {
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = RecursiveDelete(p->lchild, q->data);
        }
        else
        {
            q = InSucc(p->rchild);
            p->data = q->data;
            p->rchild = RecursiveDelete(p->rchild, q->data);
        }
    }
    return p;
}
int main()
{
    root = RecursiveInsertBST(root, 10);
    RecursiveInsertBST(root, 5);
    RecursiveInsertBST(root, 20);
    RecursiveInsertBST(root, 8);
    RecursiveInsertBST(root, 30);
    printf("\nInorder: ");
    InorderBST(root);
    struct Node *temp = SearchBST(20);
    if (temp != NULL)
        printf("\nElement %d found\n", temp->data);
    else
        printf("\nElement not found\n");
    RecursiveDelete(root, 20);
    InorderBST(root);
    return 0;
}