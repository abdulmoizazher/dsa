#include<iostream>
using namespace std;

struct BST_Node {
    int data;
     BST_Node* left;
     BST_Node* right;
}; 

 BST_Node* addnode(int data)
{
    BST_Node* addnode = new BST_Node;
    addnode->data=data;
    addnode->right=nullptr;
    addnode->left=nullptr;
    return addnode;
}


BST_Node *insert(BST_Node* root, int data)
{
    if (root == NULL)
    {
        root = addnode (data);
         }

    else if (data < root->data)
    {
        root->left = insert(root->left, data);

    }
    else 
    {
        root->right = insert(root->right,data);
        
    } 
        return root;
        
    }

    void preorder(BST_Node* node){
        
        if (node == nullptr )
        {
              return;}
                         
          cout<<node->data<< endl;
          preorder( node ->left);
          preorder( node-> right);
        
    }



int main()
{

  BST_Node* root = nullptr;
  root = insert(root, 13);
  root = insert(root , 15);
  root = insert(root , 14);
  root = insert(root , 9);
  preorder(root);
  return 0;


}