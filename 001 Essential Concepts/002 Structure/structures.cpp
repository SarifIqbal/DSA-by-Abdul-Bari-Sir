#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
} R1; // declaration of R1
int main()
{
    struct Rectangle R1 = {10, 5};  // initializaton of R1
    struct Rectangle R2 = {21, 11}; // declaration & initialization of R2
    cout<<"Length and Breadth of R1: "<<R1.length<<" "<<R1.breadth<<endl;
    cout<<"Length and Breadth of R2: "<<R2.length<<" "<<R2.breadth<<endl;
    struct Rectangle R3;    //declaration of R3
    R3.length=100;  //initialization of length
    R3.breadth=50;  //and breadth of R3
    cout<<"Length and Breadth of R3: "<<R3.length<<" "<<R3.breadth<<endl;
    return 0;
}