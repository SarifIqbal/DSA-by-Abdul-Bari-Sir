#include <iostream>
using namespace std;
int main()
{
    int a = 11;
    int *p = &a;
    int **q = &p;
    cout << "The Value at a is: " << a << endl;
    cout << "The Value at a is: " << *p << endl;
    cout << "The Value at a is: " << **q << endl;
    cout<<endl;
    cout << "The Address of a: " << (int)&a << endl;
    cout << "The Address of a: " << (int)p << endl;
    cout << "The Address of a: " << (int)*q << endl;
    cout<<endl;
    cout << "The Address of p: " << (int)&p << endl;
    cout << "The Address of p: " << (int)q << endl;
    cout<<endl;
    cout << "The Address of q: " << (int)&q << endl;

    return 0;
}