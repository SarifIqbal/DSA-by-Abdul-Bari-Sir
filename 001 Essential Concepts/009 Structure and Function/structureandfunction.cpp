#include <iostream>
#include <stdio.h>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int area(struct Rectangle r1)
{
    return r1.length * r1.breadth;
}
int perimeter(Rectangle r)
{
    return 2 * (r.length + r.breadth);
}
void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}
int main()
{
    Rectangle R = {0, 0}; // writing struct isn't compulsory
    printf("Enter length and breadth: ");
    // cin >> R.length >> R.breadth;      //we have created an
    int l, b; // initializer function
    cin >> l >> b;
    initialize(&R, l, b);
    int a = area(R);
    int p = perimeter(R);
    cout << "The area is: " << a << endl;
    cout << "The perimeter is: " << p << endl;
    return 0;
}