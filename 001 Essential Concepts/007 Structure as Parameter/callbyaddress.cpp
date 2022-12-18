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
void changelength(struct Rectangle *Rect, int newlength)
{
    Rect->length = newlength;
}
int main()
{
    struct Rectangle R = {21, 7};
    cout << "Area of Rectangle before change is: " << R.length * R.breadth << endl;
    changelength(&R, 11);
    cout << "Area of Rectangle after change is: " << R.length * R.breadth << endl;
    return 0;
}