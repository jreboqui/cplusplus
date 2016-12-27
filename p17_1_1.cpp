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

    // create first node with 12.5
    ListNode *head = new ListNode;
    head->value = 12.5;
    head->next = NULL;

    // create second node with 13.5
    ListNode *secondPtr = new ListNode;
    secondPtr->value = 13.5;
    secondPtr->next = NULL;
   // head->next = secondPtr;

    //create third one
    ListNode *thirdPtr = new ListNode;
    thirdPtr->value = 8.88;
    thirdPtr->next = NULL;
    
    //connect them head then second then third
    head->next = secondPtr;
    secondPtr->next = thirdPtr;
    //print the list
    cout << "First item is " << head->value << endl;
    cout << "Second item is " << head->next->value << endl;
    cout << "Third item is " << head->next->next->value << endl;    
   
    //reverse the list
    thirdPtr->next = secondPtr;
    secondPtr->next = head;
    head->next = NULL;
     
    //print the list AGAIN
    cout << "First item is " << thirdPtr->value << endl;
    cout << "Second item is " << thirdPtr->next->value << endl;
    cout << "Third item is " << thirdPtr->next->next->value << endl;    
    return 0;
}//end of main
