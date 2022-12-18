#include <iostream>
using namespace std;
enum meal
{
    breakfast,
    lunch = 20,
    snacks,
    dinner = -20,
    sweetdish
}M;
int main()
{
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << snacks << endl;
    cout << dinner << endl;
    cout << sweetdish << endl;
    cout << "" << endl;
    meal M1 = breakfast;
    cout << "The Value is: " << M1 << endl;
    meal M2 = lunch;
    cout << "The Value is: " << M2 << endl;
    meal M3 = dinner;
    cout << "The Value is: " << M3 << endl;
    cout << "" << endl;
    cout << (M1 == 0) << endl;
    cout << (M2 == 20) << endl;
    cout << (M3 == 21) << endl;
    return 0;
}