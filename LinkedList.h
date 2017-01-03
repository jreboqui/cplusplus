#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;
class LinkedList
{
    private:
        class ListNode
        {
            friend class LinkedList;
            double value;
            ListNode *next;
            ListNode(double value1, ListNode *next1 = NULL)
            {
                value = value1;
                next = next1;
                //constructor
            }
        };//end of ListNode
        ListNode *head;
    public:
        LinkedList()
        {head = NULL;}
//        ~LinkedList(); //Destructor
        
        void insert(int);
        void display();
};//end of class

#endif
