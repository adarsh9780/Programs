#include <iostream>
using namespace std;

//individul items are already sorted, merge them.
void Merge(int *, int, int, int);

//recursively divide the array into 2 parts
void Divide(int *a, int left, int right)
{
	int mid;
	if(left<right)
	{
		mid = (left+right)/2;
		Divide(a, left, mid);
		Divide(a, mid+1, right);
		Merge(a, left, right, mid);
	}
	return;
}

void Merge(int *a, int left, int right, int mid)
{
	// i and k will start from left and j will start from mid
	int i, j, k, temp[20];
	i = left;
	k = left;
	j = mid+1;
	//while both i and j are valid index
	while(i <= mid && j <= right)
	{
		//store the one which is smaller in temp
		if(a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
	// if any of left or right array is still empty, copy them in temp
	while (i <= mid)
    {
        temp[k] = a[i];
        k++;
        i++;
    }
    while (j <= right)
    {
        temp[k] = a[j];
        k++;
        j++;
    }
    //copy temp in original array i.e (a)
    for (i=left; i<k; i++)
    {
        a[i] = temp[i];
    }
}

int main()
{
	int num_of_elmnts, left, right, i=0;

	cout << "Number of elements\n";
	cin >> num_of_elmnts;
	int A[num_of_elmnts];

	for(i=0; i<num_of_elmnts; i++)
	{
		cout << "Enter element: " << endl;
		cin >> A[i];
	}
	left = 0;
	right = num_of_elmnts-1;
	Divide(A, left, right);

// print the sorted array.
	cout << "Print\n";
	i=0;
	for(i=0; i<num_of_elmnts; i++)
	{
		cout << A[i] << endl;
	}

	return 0;
}