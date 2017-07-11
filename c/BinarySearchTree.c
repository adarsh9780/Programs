#include <stdio.h>
#include <stdlib.h>

/* Binary search Tree node*/
struct Node
{
	struct Node *right;
	int data;
	struct Node *left;
};

/* create a node */
struct Node *CreateNode(int data)
{
	struct Node *temp;
	/* create a temporary node */
	temp = (struct Node *)malloc(sizeof(struct Node));

	temp->right = NULL;
	temp->data = data;
	temp->left = NULL;

	return temp;
}

/* Insert function to any node */
struct Node *Insert(struct Node *temp, int data)
{
	/* if tree is empty, root = data */
	if(temp == NULL)
		return temp == CreateNode(temp, data);

	else if(temp->data > data)
		temp->left = Insert(temp->left, data);
	else
		temp->right = Insert(temp->right, data);
}

int main(void)
{
	struct Node *root;
	root = Insert(root, 5);
	root = Insert(root, 3);
	root = Insert(root, 6);
}