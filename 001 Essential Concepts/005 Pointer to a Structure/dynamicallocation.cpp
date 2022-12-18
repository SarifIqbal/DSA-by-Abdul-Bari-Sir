#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle *p=new Rectangle;
    p->length=11;
    p->breadth=21;
    cout<<"Lenght: "<<p->length<<endl;
    cout<<"Breadht: "<<p->breadth<<endl;
}