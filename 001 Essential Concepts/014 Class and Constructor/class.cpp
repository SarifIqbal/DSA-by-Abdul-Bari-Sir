#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle()                 // non argument constructor
    {                           // we can also call it as
        length = breadth = 1;   // default constructor
    }
    Rectangle(int l, int b); // parameterised constructor also doing constructor overloading
    int area();              // facilitator
    int perimeter();         // facilitator
    int getlength()          // accessor 
    {                        // created just to access length only
        return length;
    }
    int getbreadth()          // accessor 
    {                         // created just to access breadth only
        return breadth;
    }
    void setbreadth(int b)    // mutator
    {
        breadth = b;
    }
    ~Rectangle();            // destructor
};
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
Rectangle::~Rectangle(){}
int main()
{
    Rectangle R(21,7);
    cout<<"The length and breadth is: "<<R.getlength()<<" "<<R.getbreadth()<<endl;
    cout<<"The area is: "<<R.area()<<endl;
    cout<<"The perimeter is: "<<R.perimeter()<<endl;
    R.setbreadth(11);
    cout<<"The new length and breadth is: "<<R.getlength()<<" "<<R.getbreadth()<<endl;
    cout<<"The area is: "<<R.area()<<endl;
    cout<<"The perimeter is: "<<R.perimeter()<<endl;
    return 0;
}