/* C++ program for memoized version of fibonacci series */
#include <iostream>
#include <vector>
using namespace std;

class Fibo
{
public:
	int get_num();
	void Initialise_lookup(int num);
	int Calculate_Fibo(int num);
private:
	vector<int> lookup;
};

int Fibo :: get_num()
{
	int num;
	cin >> num;
	return num;
}

/* Initialise lookup table for fibonacci series */
void Fibo :: Initialise_lookup(int num)
{
	int count = 0;
	for(count = 0; count<=100; count++)
	{
		lookup.push_back(0);
	}
}

/* calculate fibonacci numbers */
int Fibo :: Calculate_Fibo(int num)
{
	if(lookup[num] == 0)
	{
		if(num<=1)
			lookup[num] = num;
		else
			lookup[num] = Calculate_Fibo(num-1)+Calculate_Fibo(num-2);
	}
	return lookup[num];
}

int main()
{
	Fibo obj;
	int num = obj.get_num();
	obj.Initialise_lookup(num);
	while(num != 0)
	{
		cout << obj.Calculate_Fibo(num) << endl;
		num--;
	}
	return 0;
}