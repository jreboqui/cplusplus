#include "LinkedList.h"
#include <iostream>
using namespace std;

void LinkedList::insert(int data)
{
    ListNode *nodePtr, *previousNodePtr;
    
    if (head == NULL)
    {
        //new node
        head = new ListNode(data);
    }//end if

    else
    {
        ListNode *nodePtr;
        nodePtr = head;
        // traverse
        while(nodePtr->next != NULL)
            nodePtr = nodePtr->next;
        nodePtr->next = new ListNode(data);
    }
}//end of insert

void LinkedList::display()
{
    ListNode *nodePtr;
    nodePtr = head;
    //traverse and print
    while(nodePtr)
    {
        cout << nodePtr->value << endl;
        nodePtr = nodePtr->next;
    }//end while
}//end of display
