//Binary Search Tree
#include <iostream>
using namespace std;

struct BstNode { 
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* GetNewNode(int data) {
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode-> left = NULL;
    newNode-> right = NULL;
    return newNode;

}//end of GNN

BstNode* Insert(BstNode* root, int data){
    if(root == NULL) { //empty tree then
        root = GetNewNode(data);
    }
    //if data is lesser, then insert to left
    else if(data <= root->data) {
        root->left = Insert(root->left,data);
    }
    //else, insert in right subtree
    else {
        root->right = Insert(root->right,data);
    }
    
    return root;
}

bool Search(BstNode* root, int data) {
    if(root == NULL) return false;
    else if(root->data == data) return true;
    else if(data <= root->data) return Search(root->left, data);
    else return Search(root->right,data);

}
int main() {

    BstNode* root; //store address of root node
    root = NULL; //setting tree as empty
    
    root = Insert(root,15);    
    root = Insert(root,10);
    root = Insert(root,20);
    int number;
    cout << "Enter number to be searched\n";
    cin >> number;
    if(Search(root,number) == true) cout <<"Found\n";
    else cout <<"Not Found\n";

} // end of main

