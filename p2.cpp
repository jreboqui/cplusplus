// This program stores the address of a variable in a pointer. 
#include <iostream>
using namespace std;

int main()
{
    int x = 25;
    int ptr;
    cout << "The address of x is " << &x << endl;
    cout << "The size of x is " << sizeof(x) << " bytes\n";
    cout << "The value in x is " << x << endl;
    ptr = &x; // This stores the address of x in ptr.
    cout << "The address of x is " << ptr << endl;

    return 0;
}
