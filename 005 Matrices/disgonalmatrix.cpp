#include <iostream>
using namespace std;
class Diagonal
{
    int *A;
    int n;

public:
    Diagonal()
    {
        n = 2;
        A = new int[n];
    }
    Diagonal(int n)
    {
        this->n = n;
        A = new int[n];
    }
    ~Diagonal()
    {
        delete[] A;
    }
    void set(int i, int j, int value);
    int get(int i, int j);
    void display();
};
void Diagonal::set(int i, int j, int value)
{
    if (i == j)
        A[i - 1] = value;
}
int Diagonal::get(int i, int j)
{
    if (i == j)
        return A[i - 1];
    else
        return 0;
}
void Diagonal::display()
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                cout << A[i] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
int main()
{
    Diagonal d(4);
    d.set(1, 1, 6);
    d.set(2, 2, 7);
    d.set(3, 3, 4);
    d.set(4, 4, 9);
    cout << "Diagonal Matrix:" << endl;
    d.display();
    return 0;
}