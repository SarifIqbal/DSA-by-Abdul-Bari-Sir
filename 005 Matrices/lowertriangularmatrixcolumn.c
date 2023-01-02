#include <stdio.h>
#include <stdlib.h>
struct Matrix
{
    int *A;
    int n;
};
void set(struct Matrix *m, int i, int j, int value)
{
    if (i >= j)
        m->A[m->n * (j - 1) - (j - 2) * (j - 1) / 2 + (i - j)] = value;
}
int get(struct Matrix m, int i, int j)
{
    if (i >= j)
        return m.A[m.n * (j - 1) - (j - 2) * (j - 1) / 2 + (i - j)];
    else
        return 0;
}
void display(struct Matrix m)
{
    int i, j;
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            if (i >= j)
                printf("%d ", m.A[m.n * (j - 1) - (j - 2) * (j - 1) / 2 + (i - j)]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}
int main()
{
    struct Matrix m;
    int i, j, value;
    printf("Enter the dimension of square matrix: ");
    scanf("%d", &m.n);
    m.A = (int *)malloc(m.n * (m.n - 1) / 2 * sizeof(int)); // non zero elements
    printf("Enter all elements: ");
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            scanf("%d", &value);
            set(&m, i, j, value);
        }
    }
    printf("\n");
    display(m);
    return 0;
}