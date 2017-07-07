#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Armstrong
{
public:
	void Get_Data();
	void Check_Armstrong();
private:
	int num;
};

void Armstrong :: Get_Data()
{
	cin >> num;
}

void Armstrong :: Check_Armstrong()
{
	//get each digit from the given number
	int rem = 5;//initialise with any random value 
	int copy_num = num;
	int sum = 0, i=0;
	vector<int> REM;
	while(rem!=0)
	{
		rem = num%10;
		REM.push_back(rem);
		num = num/10;
	}
	//test
	vector<int> :: iterator it = REM.begin();
	while(it!=REM.end()-1)
	{
		cout << *it << endl;
		it++;
	}

	//find length of digit
	int length = REM.size()-1;
	for(i=0; i<length; i++)
	{
		sum = sum+pow(REM[i], length);
	}
	// sum = pow(REM[0], length) + pow(REM[1], length);
	cout << "Sum = " << sum << endl;

	if(sum == copy_num)
		cout << "Armstrong" << endl;
	else
		cout << "Not Armstrong" << endl;
}

int main()
{
	Armstrong obj;
	obj.Get_Data();
	obj.Check_Armstrong();
	return 0;
}