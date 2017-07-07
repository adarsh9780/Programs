#include <iostream>
#include <vector>

using namespace std;

vector<int> Divide(vector<int> A)
{
	vector<int> left_vec, right_vec, temp_vec;
	cout << "line 8 executed\n";
    vector<int> :: iterator mid_vec;
    cout << "line 10 executed\n";
    int mid;
    cout << "line 12 executed\n";
    if(A.size() > 1)
    {
    	cout << "line 14 executed\n";
    	mid = (0+A.size())/2;
    	cout << "line 16 executed\n";
    	mid_vec = A.begin() + mid;
    	cout << "line 19 executed\n";
    	vector<int> :: iterator i = A.begin();
    	cout << "line 20 executed\n";
    	while(i!=mid_vec)
    	{
    		cout << "line 23 executed\n";
    		left_vec.push_back(*i);
    		cout << "line 26 executed\n";
    		i++;
    	}
    	while(i!=A.end())
    	{
    		cout << "line 30 executed\n";
    		right_vec.push_back(*i);
    		cout << "line 34 executed\n";
    		i++;
    	}
    	left_vec = Divide(left_vec);
    	right_vec = Divide(right_vec);
    }
    else
    {
    	// right_vec = A;
    	left_vec = A;
    }

    return left_vec;
    // return right_vec;
}


int main()
{
	vector<int> A = {1,2,3,4,5,6,7,8,9,0,10,11};
	vector<int> B;
	B = Divide(A);
	vector<int> :: iterator b = B.begin();
	while(b != B.end())
	{
		cout << *b << endl;
		b++;
	}
	return 0;
}
