#include <stdio.h>
#include <stdlib.h>
#define size 5
/* Dynamic array */

void Insert(int *arr, int current_size)
{
	int item, i;
	int *arr1;
	arr1 = arr;
	int *ptr;
	scanf("%d", &item);/* element to be inserted */
	if(current_size < size)
	{
		*arr1(0 + current_size) = item;
	}
	else
	{
		ptr = malloc(2*sizeof(int));
		for(i = 0; i<current_size; i++)
		{
			*ptr(0+i) = *arr1(0+i);
		}
		arr = ptr;
	}
}


int main()
{
	int choice;
	int arr[size];
	int *ptr;
	ptr = &arr[0]
	static int current_size = 0;
	scanf("%d", &choice);
		while(1)
	{
		printf("\n");
		printf("==============================================\n");
		printf("        1.)=> Insert\n");
		printf("        2.)=> Traverse\n");
		printf("        3.)=> Exit\n");
		printf("==============================================\n");
		printf("\n");
		scanf("%d", &choice);
		switch(choice)
		{
		case 1:
			Insert(*ptr, current_size);
			break;
		case 2:
			Traverse();
			break;
		case 3:
			return 0;
		}
}