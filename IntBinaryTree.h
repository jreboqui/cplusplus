#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H

class IntBinaryTree
{

private:
    class TreeNode
    {
        friend class IntBinaryTree;
        int value;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int value1, TreeNode *left1 =NULL,
                 TreeNode *right1 = NULL) 
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
    { root = NULL; }
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




