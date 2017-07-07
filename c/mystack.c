#include<stdio.h>

struct stk
{
	int head;
	int array[5];
}stack;

void push(void);
void pop(void);
void display(void);

void main()
{
	int choice;

	stack.head = -1;

	while(1)
	{
		printf("=============================\n");
		printf("	   1 ==> Push\n");
		printf("	   2 ==> Pop\n");
		printf("	   3 ==> Display\n");
		printf("	   4 ==> Exit\n");
		printf("=============================\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				return;
		}
	}
}

void push()
{
	int num;
	if(stack.head == 4)
	{
		printf("SORRY !!! Stack is full\n");
		return;
	}
	else
	{
		printf("Enter number to be pushed on stack\n");
		scanf("%d", &num);
		stack.head += 1;
		stack.array[stack.head] = num;
	}
	return;
}

void pop()
{
	int num;
	if(stack.head == -1)
	{
		printf("Stack is empty!!!!!!!!!! Nothing to pop.\n");
	}
	else
	{
		num = stack.array[stack.head];
		printf("Poped element is :%d\n" , num);
		stack.head = stack.head-1;
	}
}

void display()
{
	int count;
	if(stack.head == -1)
	{
		printf("Stack is empty!!!!!!!!!! Nothing to show.\n");
	}
	else
	{
		printf("=============================\n");
		for(count = stack.head; count >= 0; count--)
		{
			printf("%d\n", stack.array[count] );
		}
	}
}