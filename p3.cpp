// This program demonstrates the use of the indirection operator
#include <iostream>
using namespace std;

int main()
{
    int x = 25;
    int *ptr;

    ptr = &x; //Stores address of x
    cout << "Here is the value in x, printed twce:\n";
    cout << x << " " << *ptr << endl;
    *ptr = 100; //This puts 100 to x.
    cout << "Once again, here is the value in x:\n";
    cout << x << " " << *ptr << endl;
    return 0;
}
