#include <stdio.h>
struct Matrix
{
    int A[10];
    int n;
};
void display(struct Matrix m)
{
    int i, j;
    for (i = 0; i < m.n; i++)
    {
        for (j = 0; j < m.n; j++)
        {
            if (i == j)
                printf("%d ", m.A[i]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}
void set(struct Matrix *m, int i, int j, int x)
{
    if (i == j)
        m->A[i - 1] = x;
}
int get(struct Matrix m, int i, int j)
{
    if (i == j)
        return m.A[i - 1];
    else
        return 0;
}
int main()
{
    struct Matrix m;
    m.n = 5;
    set(&m, 1, 1, 3);
    set(&m, 2, 2, 7);
    set(&m, 3, 3, 4);
    set(&m, 4, 4, 9);
    set(&m, 5, 5, 6);
    printf("Displaying the matrix:\n");
    display(m);
    printf("Value at [2,2] is: %d\n", get(m, 2, 2));
    return 0;
}