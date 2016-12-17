//This program uses a structure pointer to dynamically allocate
// a structure variable in memory.
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

struct PayRoll
{ 
    int empNumber; //Employee number
    string name; //Employee's name
    double hours;
    double payRate;
    double grossPay;



};//end of struct

int main()
{
    PayRoll *employee;   //creates memory for payroll type and it's called
                         //employee

    employee = new PayRoll;  //PayRoll emplyoee = new PayRoll(); in java?

    cout << "Enter the employee's number: ";
    cin >> employee->empNumber;
    cout << "Enter the employee's name: ";
    cin.ignore();
    getline(cin, employee->name);
    cout << "How many hours did the employee work? ";
    cin >> employee->hours;
    cout << "Hourly pay? ";
    cin >> employee->payRate;
    
        employee->grossPay = employee->hours * employee->payRate;

    cout << "Name: " << employee->name << endl;
    cout << "Number: " << employee->empNumber << endl;
    cout << "Hours worked: " << employee->hours << endl;
    cout << "Hourly pay rate: " << employee->payRate << endl;
    cout << setprecision(2) << fixed << showpoint;
    cout << "Gross pay: $" << employee->grossPay << endl;
    delete employee; //Free the allocated memory.
    return 0;

}//end of main
