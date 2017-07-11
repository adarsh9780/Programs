#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <typeinfo>
#include <numeric>

using namespace std;

struct CountTable
{
	int data;
	int count;
};

int main()
{
	vector<struct CountTable> table;
	vector<int> vec = {1,2,3,1,4,1,5,1,6,1,1,3,4,5};
	int n = vec.size();
	cout << "length : " << n << endl;
	int k = 3;

	int i=0, j=0;

	// table.push_back(CountTable());
	// struct CountTable copy = *(table.end()-1);
	// copy.data = *(vec.begin());
	// copy.count = *(vec.end()-1);
	// cout << copy.data << endl;
	// cout << copy.count << endl;

	for(j=0; j<k; j++)
	{
		table.push_back(CountTable());
		table.at(j).data = 0;
		table.at(j).count = 0;
		// struct CountTable copy = *(table.end()-1);
		// cout << copy.data << endl;
		// cout << copy.count << endl;
		// copy.data = vec.at(j);
		// copy.count += 1;
	}

	j=0;

	// table.at(0).data = vec.at(0);
	// table.at(0).count += 1;

	for(i=0; i<n; i++)
	{
		for(j=0; j<k; j++)
		{
			if(table.at(j).data == vec[i])
			{
				table.at(j).count += 1;
				// cout << "If completed...." << endl;
				break;
			}
		}
		// cout << "for completed...." << endl;
		table.push_back(CountTable());
		// cout << "push completed...." << endl;	
		struct CountTable copy = *(table.end()-1);
		// cout << "copy completed...." << endl;
		copy.data = vec.at(i);
		// cout << "indexing completed...." << endl;
		copy.count += 1;
	}

	for(j=0; j<k; j++)
	{
		cout << table.at(j).data << endl;
		cout << table.at(j).count << endl;
	}

	return 0;
}