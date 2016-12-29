// This program builds a binary tree with a 5 nodes.
#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

int main()
{ 

    IntBinaryTree Tree; 
    
    cout << "Inserting numbers...";
    Tree.insert(5);
    Tree.insert(8);
    Tree.insert(3);
    Tree.insert(12);
    Tree.insert(9);
    cout << "Done.\n";
    return 0;

}//end of main
