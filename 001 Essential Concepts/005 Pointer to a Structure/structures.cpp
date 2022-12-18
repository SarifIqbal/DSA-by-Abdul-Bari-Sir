#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
}r1;

int area(int a, int b)
{
    return a*b;
}
int main()
{
    cout<<"Size of Rectangle structure in bytes: "<<sizeof(r1)<<endl;
    struct Rectangle r1={10, 5};
    cout<<"The area is: "<<area(r1.length, r1.breadth)<<endl;
    struct Rectangle *p = &r1;
    r1.length = 21;             //normally changing the value of the variable 
    p->breadth = 11;            //changing the value of variable using a pointer
    cout<<"The area is: "<<area(r1.length, r1.breadth)<<endl;
    return 0;
}