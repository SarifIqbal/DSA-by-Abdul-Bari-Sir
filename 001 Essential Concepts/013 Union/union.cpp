#include <iostream>
#include <iomanip>
using namespace std;
/*
only one data of union can be used once but in structure, all data
members have their space in memory...
*/
union Employee
{
    int EmployeeId; // 4 bytes      it will reserve a
    char Car;       // 1 byte       total of 4
    float Salary;   // 4 bytes      bytes
} E1;
int main()
{
    union Employee E1;
    E1.EmployeeId = 12121;
    cout << "The Employee Id is: " << E1.EmployeeId << endl;
    E1.Salary = 123456.50;
    cout << "The Salary is: " << fixed << setprecision(2) << E1.Salary << endl;
    E1.Car = 'M';
    cout << "The Car is: " << E1.Car << endl;
    return 0;
}
