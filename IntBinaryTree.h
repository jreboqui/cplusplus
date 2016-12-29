#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H
#include <cstddef>
class IntBinaryTree
{

private:
    class TreeNode
    {
        friend class IntBinaryTree;
        int value;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int value1, TreeNode *left1 = nullptr,
                 TreeNode *right1 = nullptr) 
        {
            value = value1;
            left = left1;
            right = right1;

        }
    };
    TreeNode *root;
    void insert(TreeNode *&, int);
    void destroySubtree(TreeNode *);
    void remove(TreeNode *&, int);
    void makeDeletion(TreeNode *&);
    void displayInOrder(TreeNode *);
    void displayPreOrder(TreeNode *);
    void displayPostOrder(TreeNode *);
public:
    IntBinaryTree() //Constructor
    { root = nullptr; }
    ~IntBinaryTree()
    { destroySubtree(root); }
    void insert(int num)
    { insert(root, num); }
    bool search(int);
    void remove(int num)
    { remove(root, num);}
    void showInOrder(void)
    { displayInOrder(root); }
    void showPreOrder()
    { displayPreOrder(root); }
    void showPostOrder()
    { displayPostOrder(root); }
};
#endif




