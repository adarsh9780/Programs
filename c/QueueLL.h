#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *right;
	struct Node *left;
};

struct QNode
{
	struct Node *data;
	struct QNode *next;
};

/* insert at rear */
void Enqueue(struct Node *data, struct QNode *Queue;)
{
	// int data;
	// scanf("%d", &data);

	struct QNode *temp = (struct QNode *)malloc(sizeof(struct QNode));

	temp->data = data;
	temp->next = NULL;
	/* check if linked list is empty */
	if(Queue == NULL)
	{
		Queue = temp;
	}
	else
	{
		struct QNode *head;
		head = Queue;
		while(head->next != NULL)
		{
			head = head->next;
		}
		head->next = temp;
	}
}

/* remove front */
struct Node *Dequeue(struct Qnode *Queue)
{
	if(Queue == NULL)
		return Queue;
	else
	{
		struct QNode *temp = Queue;
		Queue = Queue->next;
		free(temp);
		return temp->next;
	}
}

// void Traverse()
// {
// 	struct QNode* temp = root;
// 	while(temp != NULL)
// 	{
// 		printf("%d\n", temp->data);
// 		temp = temp->next;
// 	}
// }

struct QNode *Front(struct Qnode *Queue)
{
	return Queue->data;
}

// int main(void)
// {
// 	root = NULL;
// 	Enqueue();
// 	Enqueue();
// 	Enqueue();
// 	Enqueue();
// 	struct Node *ptr;
// 	ptr = Dequeue();
// 	Traverse();
// 	printf("Front element is : %d\n", Front());
// }