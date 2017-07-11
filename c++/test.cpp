/* Implementation of Merge Sort Algorithm using Vectors */
#include <iostream>
#include <vector>

using namespace std;

/* Class to implement the algorthim */
class MergeSort
{
public:
	vector<int> Divide(vector<int>);
	void Print(vector<int>);
	vector<int> Get_Data(vector<int>, int);
private:
	vector<int> Merge(vector<int>, vector<int>, vector<int>);
};

/* Get numbers from user */
vector<int> MergeSort :: Get_Data(vector<int> A, int num)
{
    int item;
    while(num!=0)
    {
	    cout << "Item : ";
	    cin >> item;
	    A.push_back(item);
	    num--;
    }
    return A;
}

/*Divide the array into left and right recursively*/
vector<int> MergeSort :: Divide(vector<int> A)
{
	vector<int> left_vec, right_vec, temp_vec;
    vector<int> :: iterator mid_it;
    int mid;
    if(A.size() > 1)
    {
    	//find the mid position
    	mid = (0+A.size())/2;
    	//and corresponding to this mid position draw an iterator
    	mid_it = A.begin() + mid;
    	vector<int> :: iterator i = A.begin();
    	//left_vec will be from beginning to mid_it
    	while(i!=mid_it)
    	{

    		left_vec.push_back(*i);
    		i++;
    	}
    	//and right_vec will be from mid_it to end.
    	while(i!=A.end())
    	{
    		right_vec.push_back(*i);
    		i++;
    	}
    	//repeat the above process till individual elements are found
    	left_vec = Divide(left_vec);
    	right_vec = Divide(right_vec);
    	temp_vec = Merge(left_vec, right_vec, temp_vec);
    }
    else
    {
    	temp_vec = A;
    }

    return temp_vec;
}

//merge the two sorted array together
vector<int> MergeSort :: Merge(vector<int> A, vector<int> B, vector<int> temp)
{
    vector<int> :: iterator a, b;
    a = A.begin();
    b = B.begin();

	// compare elements in both the array
    while(a!=A.end() && b!=B.end())
    {
		// and push the smaller element into temp
	    if(*a < *b)
	    {
		    temp.push_back(*a);
		    a++;
	    }
	    else
	    {
		    temp.push_back(*b);
		    b++;
	    }
    }

    // if some elements are still left, push them too.
    while(a!=A.end())
    {
	    temp.push_back(*a);
	    a++;
    }
    while(b!=B.end())
    {
	    temp.push_back(*b);
	    b++;
    }

	return temp;
}

// Print the array.
void MergeSort :: Print(vector<int> temp)
{
	vector<int> :: iterator it = temp.begin();
	while(it != temp.end())
	{
		cout << *it << endl;
		it++;
	}
}

int main()
{	
    MergeSort obj;
    int num, left, right;
    vector<int> temp, A;
    
    cout << "Number of elements : ";
    cin >> num;
    
    A = obj.Get_Data(A, num);
    left = 0;
    right = num;
    temp = obj.Divide(A);

    cout << "Sorted Array\n";
    obj.Print(temp);
    
    return 0;
}