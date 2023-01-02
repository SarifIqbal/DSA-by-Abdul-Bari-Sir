#include <iostream>
using namespace std;
class LowerTriangle
{
    int *A;
    int n;

public:
    LowerTriangle()
    {
        n = 2;
        A = new int[n * (n + 1) / 2];
    }
    LowerTriangle(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    ~LowerTriangle()
    {
        delete[] A;
    }
    void set(int i, int j, int value);
    int get(int i, int j);
    void display();
    int getdimension()
    {
        return n;
    }
};
void LowerTriangle::set(int i, int j, int value)
{
    if (i >= j)
        A[n * (j - 1) - (j - 2) * (j - 1) / 2 + (i - j)] = value;
}
int LowerTriangle::get(int i, int j)
{
    if (i >= j)
        return A[n * (j - 1) - (j - 2) * (j - 1) / 2 + (i - j)];
    else
        return 0;
}
void LowerTriangle::display()
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i >= j)
                cout << A[n * (j - 1) - (j - 2) * (j - 1) / 2 + (i - j)] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter dimensions: ";
    cin >> n;
    LowerTriangle lt(n);
    int value;
    cout << "Enter all the elements:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> value;
            lt.set(i, j, value);
        }
    }
    cout << endl;
    cout << endl;
    lt.display();
    return 0;
}