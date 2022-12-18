// Template classes are generic classes they support any data type

// if a class is a template class, so whenever you
// use a class name you should pass template parameter

// class became template
// the generic variable is T
// writing T in front of a and b in private means no data type, generic data type
// whatever the data type you want you can make that datatype

// when we write this-> a = a, it refers data member a if we write a=a it will refer
// to same variable in constructor
// hence we write this so that it can insert the value in data member
// normal a is stored in data member a
#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};
template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template <class T>
T Arithmetic<T>::add()
{
    T c;
    c = a + b;
    return c;
}
template <class T>
T Arithmetic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}
int main()
{
    Arithmetic<int> ar(21, 11);
    cout << "Add: " << ar.add() << endl;
    cout << "Sub: " << ar.sub() << endl;
    Arithmetic<float> arr(21.11, 11.21);
    cout << "Add: " << arr.add() << endl;
    cout << "Sub: " << arr.sub() << endl;
    return 0;
}