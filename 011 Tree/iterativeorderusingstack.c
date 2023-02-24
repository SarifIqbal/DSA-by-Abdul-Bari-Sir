#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};
struct Queue
{
    int size;
    int front;
    int rear;
    struct Node **Q;
};
void CreateQueue(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->Q = (struct Node **)malloc(q->size * sizeof(struct Node *));
}
void enqueue(struct Queue *q, struct Node *x)
{
    if ((q->rear + 1) % q->size == q->front)
        printf("Queue is Full\n");
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}
struct Node *dequeue(struct Queue *q)
{
    struct Node *x = NULL;
    if (q->front == q->rear)
        printf("Queue is Empty\n");
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}
int isQueueEmpty(struct Queue q)
{
    return q.front == q.rear;
}
struct Node *root = NULL;
void CreateTree()
{
    struct Node *p, *t;
    int x;
    struct Queue q;
    CreateQueue(&q, 100);
    printf("Enter root value: ");
    scanf("%d", &x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);
    while (!isQueueEmpty(q))
    {
        p = dequeue(&q);
        printf("Enter left child of %d: ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }
        printf("Enter right child of %d: ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}
void preorder(struct Node *p)
{
    if (p)
    {
        printf("%d ", p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void inorder(struct Node *p)
{
    if (p)
    {
        inorder(p->lchild);
        printf("%d ", p->data);
        inorder(p->rchild);
    }
}
void postorder(struct Node *p)
{
    if (p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        printf("%d ", p->data);
    }
}
struct Stack
{
    int size;
    int top;
    struct Node **S;
};
void StackCreate(struct Stack *st, int size)
{
    st->size = size;
    st->top = -1;
    st->S = (struct Node **)malloc(st->size * sizeof(struct Node *));
}
void push(struct Stack *st, struct Node *x)
{
    if (st->top == st->size - 1)
        printf("Stack Overflow\n");
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}
struct Node *pop(struct Stack *st)
{
    struct Node *x = NULL;
    if (st->top == -1)
        printf("Stack Underflow\n");
    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}
int isStackEmpty(struct Stack st)
{
    if (st.top == -1)
        return 1;
    return 0;
}
int isStackFull(struct Stack st)
{
    return st.top == st.size - 1;
}
void IterativePreOrder(struct Node *p)
{
    struct Stack st;
    StackCreate(&st, 100);
    while (p || !isStackEmpty(st))
    {
        if (p)
        {
            printf("%d ", p->data);
            push(&st, p);
            p = p->lchild;
        }
        else
        {
            p = pop(&st);
            p = p->rchild;
        }
    }
}
void IterativeInOrder(struct Node *p)
{
    struct Stack st;
    StackCreate(&st, 100);
    while (p || !isStackEmpty(st))
    {
        if (p)
        {
            push(&st, p);
            p = p->lchild;
        }
        else
        {
            p = pop(&st);
            printf("%d ", p->data);
            p = p->rchild;
        }
    }
}
int main()
{
    CreateTree();
    printf("\nPreOrder: ");
    IterativePreOrder(root);
    printf("\nInOrder: ");
    IterativeInOrder(root);
    return 0;
}