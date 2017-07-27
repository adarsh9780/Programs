#include "Trees.h"

// cstddef for incuding NULL
#include <cstddef>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


void Trees :: Preorder(struct Node *root)
{
    // cout << "Print Started" << endl;
    if(root == NULL)
        return;
    cout << root->data << endl;
    Preorder(root->left);
    Preorder(root->right);
}

void Trees :: Inorder(struct Node *root)
{
    // cout << "Print Started" << endl;
    if(root == NULL)
        return;
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}

void Trees :: Postorder(struct Node *root)
{
    // cout << "Print Started" << endl;
    if(root == NULL)
        return;
    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << endl;
}

// void Trees :: Stack_Preorder(struct Node* root)
// {
//     std::vector<struct Node*> stack1;
//     while(1)
//     {
//         while(root)
//         {
//             cout << root->data << endl;
//             stack1.push_back(root);
//             root = root->left;
//         }
//         if(stack1.empty())
//             break;
//         std::vector<struct Node*> :: iterator it = stack1.end();
//         root = *(it-1);
//         stack1.pop_back();
//         root = root->right;
//     }
// }
// void Trees :: Stack_Inorder(struct Node* root)
// {
//     std::vector<struct Node*> stack1;
//     while(1)
//     {
//         while(root)
//         {
//             stack1.push_back(root);
//             root = root->left;
//         }
//         if(stack1.empty())
//             break;
//         std::vector<struct Node*> :: iterator it = stack1.end();
//         root = *(it-1);
//         stack1.pop_back();
//         cout << root->data << endl;
//         root = root->right;
//     }
// }