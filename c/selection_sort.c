#include<stdio.h>

int main(){

	int array[] = {14, 45, 42, 1, 3, 45};
	int min = array[0];
	int count;

// find minimum element
	for(count=0; count<6; count++)
	{
		if(array[count] < min)
		{
			min = array[count];
		}

		array[count] = min;
	}


    return 0;
}