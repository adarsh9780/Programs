#include <stdio.h>
#include "LinkedList.h"

int main(void)
{
	head = NULL; /* empty linked list */
	struct Node *pre = NULL;
	int choice;
	while(1)
	{
		printf("\n");
		printf("==============================================\n");
		printf("        1.)=> Insert at beginning\n");
		printf("        2.)=> Insert at End\n");
		printf("        3.)=> Insert in between\n");
		printf("        4.)=> Traverse\n");
		printf("        5.)=> Delete Item\n");
		printf("        6.)=> Print\n");
		printf("        7.)=> Reverse\n");
		printf("        8.)=> Recursion\n");
		printf("        9.)=>rearrange");
		printf("        10.)=> Exit\n");
		printf("==============================================\n");
		printf("\n");
		scanf("%d", &choice);
		switch(choice)
		{
		case 1:
			InsertStart();
			break;
		case 2:
			InsertEnd();
			break;
		case 3:
			InsertPosition();
			break;
		case 4:
			Traverse();
			break;
		case 5:
			DeleteNode();
			break;
		case 6:
			Print(head);
			break;
		case 7:
			head = Reverse(head);
			break;
		case 8:
			head = Recursion(head, pre);
			break;
		case 9:
			rearrange(head);
			break;
		case 10:
			return 0;
		}
	}
}