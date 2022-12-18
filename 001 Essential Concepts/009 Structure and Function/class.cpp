#include <iostream>
class Rectangle
{
private:
    int length;
    int breadth;

public:
    // void initialize(struct Rectangle *R, int l, int b)
    // {
    //     (*R).length=21;               we have created a
    //     (*R).breadth=7;               constructor instead
    // }
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    void changebreadth(int b)
    {
        breadth = b;
    }
};
int main()
{
    Rectangle r1(21,7);
    // initialize(&r1, 21, 7);  no need as we have created a constructor instead
    printf("The area before change is: %d\n", r1.area());
    r1.changebreadth(11);
    printf("The area after change is: %d\n", r1.area());
}