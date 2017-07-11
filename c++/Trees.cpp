#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

/* A C++ progrma for Binary Search Tree */

//Node
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
	struct Node* delete_node(struct Node*, int);
	struct Node* find_min(struct Node*);
	void Preorder(struct Node* root);
	void Stack_Preorder(struct Node* root);
	void Stack_Inorder(struct Node* root);
	void Inorder(struct Node* root);
	void Postorder(struct Node* root);
private:
	struct Node *root;
	//private member function
	struct Node* Create_Node(int data);
};

//create a temporary node
struct Node* Trees :: Create_Node(int data)
{
	struct Node *temp = new struct Node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	// cout << "Node Created Successfully" << endl;
	return temp;
}

//insert the node at relevant position
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

//returns the root Node
struct Node* Trees :: Return_Root_Node()
{
	// cout << "Fetching Root Node" << endl;
	return root;
}

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

void Trees :: Stack_Preorder(struct Node* root)
{
	vector<struct Node*> stack;
	while(1)
	{
		while(root)
		{
			cout << root->data << endl;
			stack.push_back(root);
			root = root->left;
		}
		if(stack.empty())
			break;
		vector<struct Node*> :: iterator it = stack.end();
		root = *(it-1);
		stack.pop_back();
		root = root->right;
	}
}

void Trees :: Stack_Inorder(struct Node* root)
{
	vector<struct Node*> stack;
	while(1)
	{
		while(root)
		{
			stack.push_back(root);
			root = root->left;
		}
		if(stack.empty())
			break;
		vector<struct Node*> :: iterator it = stack.end();
		root = *(it-1);
		stack.pop_back();
		cout << root->data << endl;
		root = root->right;
	}
}

// struct Node* Trees :: find_min(struct Node* root)
// {
// 	int min = root->data;
// 	if(root == NULL) return root;
// 	else
// 	{
// 		while(root)
// 		{
// 			if(root->data < min) min = root->data;
// 			root = root->left;
// 		}
// 	}
// 	return root;
// }

struct Node* Trees :: find_min(struct Node *temp)
{
	if(temp == NULL)
	{
		return temp;
	}
	else
	{
		while(temp->left != NULL)
		{
			temp = temp->left;
		}
		return temp;
	}
}

//delete node
struct Node* Trees :: delete_node(struct Node* root, int data)
{
	if(root == NULL) return root;
	else if(root->data > data) root->right = delete_node(root->right, data);
	else if(root->data < data) root->left = delete_node(root->left, data);
	else
	{
		//no child case
		if(root->left==NULL && root->right==NULL)
		{
			delete root;
			//root is deleted but still it is present in memory
			root = NULL;
		}
		// one child
		else if(root->left == NULL)
		{
			//store the address of current Node
			struct Node* temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL)
		{
			//store the address of current Node
			struct Node* temp = root;
			root = root->left;
			delete temp;
		}
		struct Node* temp = find_min(root->right);
		root->data = temp->data;
		root->right = delete_node(root->right, temp->data);
		return root;
	}
}

//driving function
int main()
{
	Trees obj;
	struct Node* root = obj.Return_Root_Node();
	//cout << typeid(root).name() << endl;
	int num;//number of elements
	int data;
	cin >> num;
	root = NULL;
	while(num!=0)
	{
		cin >> data;
		root = obj.Insert(root, data);
		num--;
	}
	cout << "Before" << endl;
	obj.Preorder(root);
	
	// cout << "Stack_Preorder" << endl;
	// obj.Stack_Preorder(root);
	
	// cout << "Inorder" << endl;
	// obj.Inorder(root);

	// cout << "Stack_Inorder\n";
	// obj.Stack_Inorder(root);
	
	// cout << "Postorder" << endl;
	// obj.Postorder(root);

	root = obj.delete_node(root, 85);
	cout << "After" << endl;
	obj.Preorder(root);

	return 0;
}