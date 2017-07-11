/*find maximumm sum in an given array, if no adjacent number can be summed.
Example: 100 5 2 200 4 300
			maximum sum is 600.*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;
/*never use above shortcut for large projects and never include it in header file
because it will call entire std in your heady file consuming more memory*/
class Vector
{
public:
	void get_data();
	int Sum();
	int Maximum(vector<int> v);
	void Test();
private:
	vector<int> v;
	int num_of_elmnts;
	// stack<int> s;
};

void Vector :: Test()
{
	int count = 0;
	vector<int> :: iterator it = v.begin();
	vector<int> :: iterator it1 = v.end();
	while(it != it1)
	{
		cout << "count: " << count << "-->" <<*it << endl;
		it++;
		count++;
	}

}

void Vector :: get_data()
{
	cin >> num_of_elmnts;
	while(num_of_elmnts != 0)
	{
		int num;
		cin >> num;
		v.push_back(num);
		num_of_elmnts--;
	}
}

int Vector :: Maximum(vector<int> v)
{
	vector<int> :: iterator start = max_element(v.begin(), v.end());
	int max = *start;

	v.erase(start = start-1);
	v.erase(start);
	cout << "Start++" << *start++ << endl;
	int count = 0;
	vector<int> :: iterator it = v.begin();
	vector<int> :: iterator it1 = v.end();
	while(it != it1)
	{
		cout << "count: " << count << "-->" <<*it << endl;
		it++;
		count++;
	}
	
	return max;
}

int Vector :: Sum()
{
	int count = 0, sum = 0;

	// while(count != num_of_elmnts)
	// {
	// 	sum = sum + Maximum(v);
	// 	count++;
	// }
	sum = Maximum(v);
		return sum;
}

int main()
{
	Vector A;
	A.get_data();
	cout << A.Sum() << endl;
	// A.Test();
	return 0;
}