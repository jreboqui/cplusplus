// Linked lists basics on C++
#include "LinkedList.h"
#include <iostream>
using namespace std;

int main()
{
    //create a LinkedList and use insert on it
    LinkedList list;

    list.insert(10);
    list.insert(12);
    list.insert(13);

    list.display();
    return 0;
}//end of main
