// Linked lists basics on C++

#include <iostream>
using namespace std;

struct ListNode
{
    double value;
    ListNode *next;
};

int main()
{
    ListNode *head;

    // create first node with 12.5
    head = new ListNode; //allocate new node
    head->value = 12.5;
    head->next = NULL;

    // create second node with 13.5
    ListNode *secondPtr = new ListNode;
    secondPtr->value = 13.5;
    secondPtr->next = NULL;
    head->next = secondPtr;

    //print the list
    cout << "First item is " << head->value << endl;
    cout << "Second item is " << head->next->value << endl;
    
    return 0;
}//end of main
