#include <iostream>
using namespace std;
// no need to pass length and breadth seperately
// you can pass the structure itself
// as the structure is carrying length and breadth so both will be passed

// no seperate object will be created because Rect is a nickname to R
struct Rectangle
{
    int length;
    int breadth;
};
int area(struct Rectangle &Rect)
{
    return Rect.length * Rect.breadth;
}
int main()
{
    struct Rectangle R = {21, 11};
    cout<<"Area of Rectangle is: "<<area(R);
    return 0;
}

//area function will be pasted just below main function in the code segment
//pass by refernce is an inline function