#include <stdio.h>
#include <stdlib.h>
#include "QueueLL.h"

// struct BSTNode
// {
// 	int data;
// 	struct BSTNode *right;
// 	struct BSTNode *left;
// };

struct QNode *Queue;

struct Node *CreateNewNode(int data)
{
	struct Node *temp;
	temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = data;
	temp->right = NULL;
	temp->left = NULL;
	return temp;
}

struct Node *Insert(struct Node *temp, int data)
{
	struct Node *newNode;
	if(temp == NULL)
	{
		temp = CreateNewNode(data);
		return temp;
	}
	else if(data > temp->data)
	{
		temp->right = Insert(temp->right, data);
	}
	else if(data <= temp->data)
	{
		temp->left = Insert(temp->left, data);
	}
}

int Search(struct Node *temp, int data)
{
	if(temp == NULL)
		return 1;
	else if(temp->data == data)
		return 0;
	else if(temp->data > data)
		return Search(temp->left, data);
	else
		return Search(temp->right, data);
}

int FindMin(struct Node *temp)
{
	if(temp == NULL)
	{
		return -1;
	}
	else
	{
		while(temp->left != NULL)
		{
			temp = temp->left;
		}
		return temp->data;
	}
}

int FindMax(struct Node *temp)
{
	if(temp == NULL)
	{
		return -1;
	}
	else
	{
		while(temp->right != NULL)
		{
			temp = temp->right;
		}
		return temp->data;
	}
}

int Maxof(int leftHeight , int rightHeight)
{
	if(leftHeight > rightHeight)
		return leftHeight;
	else
		return rightHeight;
}

int FindHeight(struct Node *root)
{
	int leftHeight, rightHeight;
	if(root == NULL)
		return -1;
	else
	{
		leftHeight = FindHeight(root->left);
		rightHeight = FindHeight(root->right);
		return Maxof(leftHeight, rightHeight) + 1;
	}
}

void Preorder(struct Node *root)
{
	if(root)
	{
		printf("%d\n", root->data);
		Preorder(root->left);
		Preorder(root->right);
	}
}

void Inorder(struct Node *root)
{
	if(root)
	{
		Inorder(root->left);
		printf("%d\n", root->data);
		Inorder(root->right);
	}
}

void Postorder(struct Node *root)
{
	if(root)
	{
		Postorder(root->left);
		Postorder(root->right);
		printf("%d\n", root->data);
	}
}

void LevelOrder(struct Node *root)
{
	// struct Node *data = root;
	Enqueue(root, Queue);
	while(Queue != NULL)
	{
		struct Node *current = Front(Queue);
		printf("%d\n", current->data);
		if(current->left != NULL)
		{
			Enqueue(current->left, Queue);
		}
		if(current->right != NULL)
		{
			Enqueue(current->right, Queue);
		}
		Dequeue(Queue);
	}
}

int main(void)
{
	Queue = NULL;
	struct Node *root;
	int min, max;
	root = NULL;
	root = Insert(root, 1);
	root = Insert(root, 2);
	root = Insert(root, 3);
	root = Insert(root, 4);
	root = Insert(root, 5);
	root = Insert(root, 6);
	// if(Search(root, 78) == 0)
	// 	printf("Found\n");
	// else
	// 	printf("Not Found\n");

	// min = FindMin(root);
	// printf("%d\n", min);
	// max = FindMax(root);
	// printf("%d\n", max);

	// int height;
	// height = FindHeight(root);
	// printf("%d\n", height);

	// printf("Goin to print Pre order\n");
	// Preorder(root);

	// printf("Going to print Post order\n");
	// Postorder(root);

	// printf("Going to print In order\n");
	// Inorder(root);
	LevelOrder(root);
}
