#include <stdio.h>
#include <stdlib.h>

/*temp variable is used everywhere because we do not want to modify linkedlist 
while traversing or performing any operation on it.*/

struct Node
{
	int data;
	struct Node* next;
};

struct Node* head; /* head must be global variable */
/* insert at the beginning */
void InsertStart()
{
	int item;
	scanf("%d", &item);
	struct Node* temp;
	temp = (struct Node*)malloc(sizeof(struct Node));/* type casting + dynamic memory allocation */
	temp->data = item;//(*temp).data = item
	temp->next = NULL;
	//check if it is first element
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		temp->next = head;
		head = temp;
	}
}

/* insert at the end */
void InsertEnd()
{
	int item;
	scanf("%d", &item);
	struct Node* temp;
	temp = (struct Node*)malloc(sizeof(struct Node));/* type casting + dynamic memory allocation */
	temp->data = item;
	temp->next = NULL;
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		struct Node* temp1;	
		temp1 = head;
		while(temp1->next != NULL)
		{
			temp1 = temp1->next;
		}
		temp1->next = temp;
	}
}

void InsertPosition()
{
	int i, item, position;
	scanf("%d", &position);
	scanf("%d", &item);
	struct Node* temp;
	temp = (struct Node*)malloc(sizeof(struct Node));/* type casting + dynamic memory allocation */
	temp->data = item;
	temp->next = NULL;
	struct Node* temp1;
	struct Node* temp2;
	temp1 = head;

	/* insert at beginning */
	if(position == 1)
	{
		temp->next = head;
		head = temp;
	}

	/* insert at any position other than beginnig*/
	else
	{
/* traverse and find the node after which insertion should take place */
		for(i=0; i<position-2; i++)
		{
			temp1 = temp1->next;
		}
		temp2 = temp1;
		temp->next = temp2->next;
		temp1->next = temp;
	}
}

void DeleteNode()
{
	int item, position, i;
	struct Node *temp, *temp1;
	temp = head;
	scanf("%d", &position); /* ask which node to delete */

	if(position == 1) /* delete first node */
	{
		head = temp->next;
		free(temp); /* delete the block of memory pointed by temp */
		return;
	}

	for(i=0; i<position-2; i++)
	{
		temp = temp->next;
	}
	temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);
}

void Traverse()
{
	struct Node* temp = head;
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

void Print(struct Node* head) /* using Recursion */
{
	struct Node* temp = head;
	if(temp->next == NULL) /* base case */
	{
		printf("%d ", temp->data);
		return;
	}
	else
	{
		printf("%d ", temp->data);
		temp = temp->next;
		Print(temp);
	}
}

struct Node* Reverse(struct Node* head)
{
	struct Node *prev, *current, *next;
	prev = NULL;
	current = head;
	while(current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	return head;
}

struct Node *Recursion(struct Node *p, struct Node *pre)
{
	struct Node *prev, *current, *next;
	current = p;
	prev = pre;

	if(current == NULL)
	{
		return head = prev;
	}

	next = current->next;
	current->next = prev;
	prev = current;
	current = next;
	Recursion(current, prev);
}

void rearrange(struct Node *head)
{
	struct Node *p, *q;
	struct Node *list;
	list = head;
	int temp;
	if(!list || !list->next)
		return;
	p = list;
	q = list->next;
	while(q)
	{
		temp = p->data;
		p->data = q->data;
		q->data = temp;
		p = q->next;
		q=(p)?p->next:0;
	}
}