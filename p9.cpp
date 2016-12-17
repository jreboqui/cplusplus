// This program uses a pointer to display the contents of an array.
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 8;
    int set[] = { 5, 10, 15, 20, 25, 30, 35, 40 };
    int *nums, index;

    nums = set;
    cout << "The numbers in set are:\n";
    for (index = 0; index < SIZE; index++)
    {
        cout << *nums << " ";
        nums++;
    }
    cout << "\nThe numbers in set backwards are:\n";
    for (index = 0; index < SIZE; index++)
    {
        nums--;
        cout << *nums << " ";
    }
    return 0;
}
