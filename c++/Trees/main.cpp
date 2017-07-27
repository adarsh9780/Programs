#include <iostream>
// #include <vector>
#include "Trees.h"
using std::cout;
using std::cin;
using std::endl;
// using std::vector;


int main()
{
    Trees obj;
    struct Node* root = obj.Return_Root_Node();
    //cout << typeid(root).name() << endl;
    int num;//number of elements
    int data;
    std::cin >> num;
    root = NULL;
    while(num!=0)
    {
        std::cin >> data;
        root = obj.Insert(root, data);
        num--;
    }
    cout << "Preorder" << endl;
    obj.Preorder(root);

    cout << "Inorder" << endl;
    obj.Inorder(root);

    return 0;
}