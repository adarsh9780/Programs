#include<stdio.h>

int main(){

//decalartion of variables.
	int row, coulmn, count_row, count_coulmn;

//initialize number of row and coulmns and array matrix.
	scanf("%d%d", &row, &coulmn);
	int array1[row][coulmn];
	int array2[row][coulmn];
	int sum[row][coulmn];
	int transpose[row][coulmn];
	int multiplication[row][coulmn];
	int test1;
	int k=0;


//initialize array1 elements. 
	for(count_row=0; count_row<row; count_row++)
	{
		for(count_coulmn=0; count_coulmn<coulmn; count_coulmn++)
		{
			scanf("%d", &array1[count_row][count_coulmn]);
		}
	}

//initialize array2 elements.
	for(count_row=0; count_row<row; count_row++)
	{
		for(count_coulmn=0; count_coulmn<coulmn; count_coulmn++)
		{
			scanf("%d", &array2[count_row][count_coulmn]);
		}
	}

// sum of array1 and array2.
	for(count_row=0; count_row<row; count_row++)
	{
		for(count_coulmn=0; count_coulmn<coulmn; count_coulmn++)
		{
			sum[count_row][count_coulmn] = array1[count_row][count_coulmn] + array2[count_row][count_coulmn];
		}
	}

// //print addition.
// 	printf("\nyour matrix is :\n");
// 	for(count_row=0; count_row<row; count_row++)
// 	{
// 		for(count_coulmn=0; count_coulmn<coulmn; count_coulmn++)
// 		{
// 			printf("%d\n", sum[count_row][count_coulmn]);
// 		}
// 	}

// //transpose of array 1.
// 	for(count_row=0; count_row<row; count_row++)
// 	{
// 		for(count_coulmn=0; count_coulmn<coulmn; count_coulmn++)
// 		{
// 			transpose[count_row][count_coulmn] = array1[count_coulmn][count_row];
// 		}
// 	}

// //print transpose matrix.
// 	printf("\nyour matrix is :\n");
// 	for(count_row=0; count_row<row; count_row++)
// 	{
// 		for(count_coulmn=0; count_coulmn<coulmn; count_coulmn++)
// 		{
// 			printf("%d\n", transpose[count_row][count_coulmn]);
// 		}
// 	}

//multiplication

	for(count_row=0; count_row<row; count_row++)
	{
		for(count_coulmn=0; count_coulmn<coulmn; count_coulmn++)
		{
			
			multiplication[count_row][count_coulmn] = array1[count_row][k] * array2[k][count_coulmn];
			k++;
		}
	}

//print multiplication matrix.
	printf("\nyour matrix is :\n");
	for(count_row=0; count_row<row; count_row++)
	{
		for(count_coulmn=0; count_coulmn<coulmn; count_coulmn++)
		{
			printf("%d\n", multiplication[count_row][count_coulmn]);
		}
	}

    return 0;
}