#include <stdio.h>
#include <stdlib.h>

struct LLStack{
	int data;
	struct LLStack *next;
};

/*create a Node*/
struct LLStack *GetNewNode(int value, struct LLStack *head){
	struct LLStack *newNode;
	newNode = (struct LLStack *)malloc(sizeof(struct LLStack));
	newNode->data = value;
	newNode->next = NULL;
	return newNode;
}

struct LLStack *IsEmpty(struct LLStack *head){
	if(head == NULL)
		return 0;
	else
		return head;
}

/*insert at front of linked list*/
struct LLStack *Push(struct LLStack *head){
	int value;
	printf("Value:");
	scanf("%d", &value);
	struct LLStack *newNode = GetNewNode(value, head);
	struct LLStack *current = head;
	newNode->next = current;
	head = newNode;
	return head;
}

/*remove element from front*/
struct LLStack *Pop(struct LLStack *head){
	if(IsEmpty(head) == NULL)
		return 0;
	struct LLStack *current = head;
	head = current->next;
	free(current);
	return head;
}

/* returns first element w/o removing it */
int Top(struct LLStack *head){
	return head->data;
}

void Print(struct LLStack *head){
	if(head == NULL)
		return;
	else{
		struct LLStack *current = head;
		while(current != NULL){
			printf("%d\n", current->data);
			current = current->next;
		}
	}
}

int Size(struct LLStack *head){
	int count = 0;
	if(head == NULL)
		return 0;
	else{
		struct LLStack *current = head;
		while(current != NULL){
			count++;
			current = current->next;
		}
	}
	return count;
}

int main(void){
	struct LLStack *head = NULL;
	head = Push(head);
	head = Push(head);
	head = Push(head);
	head = Pop(head);
	Print(head);
	printf("Size:%d\n", Size(head));
	printf("Top:%d\n", Top(head));
}