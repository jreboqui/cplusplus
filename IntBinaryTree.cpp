#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

void IntBinaryTree::insert(TreeNode * &tree, int num)
{
    if (!tree)
    {
        tree = new TreeNode(num);
        return;
    }
    //if value is already in the tree
    if (tree->value == num)
        return;
    
    //tree is not empty: insert the new node
    if (num < tree->value)
        insert(tree->left, num);
    else
        insert(tree->right, num);

}//end insert

void IntBinaryTree::destroySubtree(TreeNode *tree)
{
    if (!tree) return;
    destroySubtree(tree->left);
    destroySubtree(tree->right);
    //delete the node at the root
    delete tree;

}//end of destroy

bool IntBinaryTree::search(int num)
{
    TreeNode *tree = root;
    
    while (tree)
    {
        if (tree->value == num)
            return true;
        else if(num < tree->value)
            tree = tree->left;
        else
            tree = tree->right;
    }
    return false;

    
}//end of search

void IntBinaryTree::remove(TreeNode *&tree, int num)
{
    if (tree == NULL) return;
    if (num < tree->value)
        remove(tree->left, num);
    else if (num > tree->value)
        remove(tree->right, num);
    else
        //we have found the node to delete
        makeDeletion(tree);

}//end of remove

void IntBinaryTree::makeDeletion(TreeNode *&tree)
{
    TreeNode *nodeToDelete = tree, *attachPoint;

    if (tree->right == NULL)
    {
        tree = tree->left;
    }

    else if (tree->left == NULL)
    {
        tree = tree->right;
    }

    else
    {
        //Move to right subtree
        attachPoint = tree->right;

        //Locate the smallest node in the right subtree
        //by moving as far to the left as possible
        while (attachPoint->left != NULL)
            attachPoint = attachPoint->left;

        //Attach the left subtree of the original tree
        //as the left subtree of the smallest node
        //in the right subtree
        attachPoint->left = tree->left;

        //Replace the original tree with its right subtree
        tree = tree->right;

    }
    delete nodeToDelete;

}//end of deletion

void IntBinaryTree::displayInOrder(TreeNode *tree)
{
    if (tree)
    {
        displayInOrder(tree->left);
        cout << tree->value << endl;
        displayInOrder(tree->right);
    }

} //end of InOrder

void IntBinaryTree::displayPreOrder(TreeNode *tree)
{
    if (tree)
    {
        cout << tree->value << endl;
        displayPreOrder(tree->left);
        displayPreOrder(tree->right);
    }
} //end of PreOrder

void IntBinaryTree::displayPostOrder(TreeNode *tree)
{
    if (tree)
    {
        displayPostOrder(tree->left);
        displayPostOrder(tree->right);
        cout << tree->value << endl;
    }

} //end of PostOrder
