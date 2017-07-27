/* Class definitions */

#ifndef TREES_H
#define TREES_H

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

// class name same as name file name
class Trees
{
public:
    //contructors are called automatically as soon as object is cretated
    struct Node* Insert(struct Node *root, int data);
    struct Node* Return_Root_Node();
    void Preorder(struct Node* root);
    void Inorder(struct Node* root);
    void Postorder(struct Node* root);
    struct Node* Create_Node(int data);
    struct Node* delete_node(struct Node* root);
private:
    struct Node *root;
};

#endif