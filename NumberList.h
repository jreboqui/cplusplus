#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList
{
private:
    // Declare a type
    class ListNode
    {
    friend class NumberList;
    double value;
    ListNode *next;
    ListNode(double value1, ListNode *next1 = NULL)
    {
        value = value1;
        next = next1;
    }//constructor

    };//end of ListNode
    ListNode *head; //List head pointer
    int length(ListNode *);
    void showReverse(ListNode *);
pubic:
    NumberList()    //Constructor
    { head = NULL; }
    ~NumberList(); //Destructor
    void appendNode(double);
    void insertNode(double);
    void deleteNode(double);
    void displayList();
    int numNodes()
        { return length(head);}
    void displayBackwards()
        { showReverse(head);}
};

#endif
