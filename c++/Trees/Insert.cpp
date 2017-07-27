#include "Trees.h"
// cstddef for incuding NULL, if iostream is not included
#include <cstddef>

struct Node* Trees :: Create_Node(int data)
{
    struct Node *temp = new struct Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    // std::cout << "Node Created Successfully" << std::endl;
    return temp;
}

struct Node* Trees :: Insert(struct Node *root, int data)
{
    struct Node* temp;
    // if binary search tree is empty, fill it first root node
    if(root==NULL)
    {
        root = Create_Node(data);
        return root;
    }
    //insert the node at right side of binary search tree
    //if given is value is greater than root node value
    else if(data>=root->data)
    {
        root->right = Insert(root->right, data);
    }
    //otherwise on the left side
    else if(data<=root->data)
    {
        root->left = Insert(root->left, data);
    }
}