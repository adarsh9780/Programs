#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <typeinfo>
#include <numeric>

using namespace std;

int convert_and_compare(string X, string Y)
{
	string YX = Y.append(X);
	string XY = X.append(Y);
	return XY.compare(YX) > 0 ? 1: 0;
}

int summ(int arg1, int arg2)
{
	return arg1 * arg2;
}

int main()
{
	vector<string> vec;
	vec.push_back("3");
	vec.push_back("34");
	vec.push_back("30");
	vec.push_back("5");
	vec.push_back("9");
	sort(vec.begin(), vec.end(), convert_and_compare);
	vector<string> :: iterator it = vec.begin();
	while(it != vec.end())
	{
		cout << *it;
		it++;
	}
	// vector<int> ve;
	// ve.push_back(3);
	// ve.push_back(34);
	// ve.push_back(30);
	// ve.push_back(5);
	// ve.push_back(9);
	// cout << accumulate(ve.begin(), ve.end(), 1, summ) << endl;
	return 0;
}