#include <stdio.h>
#include <stdlib.h>

struct CLL{
	int data;
	struct CLL *next;
};


struct CLL *GetNewNode(int data, struct CLL *head){
	struct CLL *temp;
	temp = (struct CLL *)malloc(sizeof(struct CLL));
	temp->next = temp;
	temp->data = data;
	return temp;
}

int GetCount(struct CLL *head){
	int count = 0;
	struct CLL *current = head;
	if(head == NULL)
		return 0;
	do{
		current = current->next;			
		count++;
	}
	while(current != head);

	return count;
}

void PrintNode(struct CLL *head){
	struct CLL *current = head;
	if(head == NULL)
		return;
	do{
		printf("%d\n", current->data);
		current = current->next;
	}
	while(current != head);
}


struct CLL *InsertEnd(struct CLL *head){
	int value, count;
	count = GetCount(head);
	struct CLL *current = head;
	printf("Value: ");
	scanf("%d", &value);
	
	struct CLL *newNode = GetNewNode(value, head);

	if(head == NULL){
		head = newNode;
		return head;
	}

	newNode->next = head;

	while(count != 1){
		current = current->next;
		count--;
	}
	current->next = newNode;
	return head;
}

struct CLL *InsertFront(struct CLL *head){
	int value, count;
	count = GetCount(head);
	struct CLL *current = head;
	printf("Value: ");
	scanf("%d", &value);
	
	struct CLL *newNode = GetNewNode(value, head);

	if(head == NULL){
		head = newNode;
		return head;
	}

	newNode->next = head;

	while(count != 1){
		current = current->next;
		count--;
	}
	current->next = newNode;
	head = newNode;
	return head;
}

struct CLL *DeleteLastNode(struct CLL *head){
	int count = GetCount(head);
	struct CLL *current = head;
	struct CLL *temp;
	while(count != 2){
		current = current->next;
		count--;
	}
	temp = current->next;
	current->next = head;
	free(temp);
	return head;
}

struct CLL *DeleteFirstNode(struct CLL *head){
	int count = GetCount(head);
	struct CLL *current = head;
	struct CLL *temp;
	while(count != 1){
		current = current->next;
		count--;
	}
	temp = head->next;
	current->next = temp;
	current = head;
	head = temp;
	free(current);
	return head;
}

int main(void){
	struct CLL *head;
	head = NULL;
	head = InsertEnd(head);
	head = InsertEnd(head);
	head = InsertEnd(head);
	head = InsertEnd(head);
	head = InsertFront(head);
	// head = DeleteLastNode(head);
	head = DeleteFirstNode(head);
	printf("Count: %d\n", GetCount(head));
	PrintNode(head);
}