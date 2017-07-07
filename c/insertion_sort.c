#include<stdio.h>

void insertion_sort(arrayx, num_of_items);

int main(){

	int i;
	int arrayx;
	int num_of_items;
	scanf("%d", &num_of_items);//num of items to be inserted in array

	for(i=0; i < num_of_items; i++){

		int item;
		scanf("%d", &item);// item to be inserted
		arrayx[i] = item;

	}

	insertion_sort(arrayx, num_of_items);
}

void insertion_sort(arrayx, num_of_items){

	int value, hole, i;

	for(i=0; i<num_of_items; i++){

		value = arrayx[i];
		hole = arrayx[i];

		while(hole > 0 && arrayx[hole] > value){

			arrayx[hole] = arrayx[hole-1];
			hole = hole-1;
		}

		arrayx[hole] = value;
	}

	for(i=0; i<num_of_items; i++){

		printf("%d\n", arrayx[i]);
	}
}