#include <iostream>
#include <vector>
using namespace std;

class Queue_Class
{
public:
	void Push();
	void Pop();
	void Print();
	void Top();
private:
	vector<int> array;
	int data;
	int top = 0;
};

void Queue_Class :: Push()
{
	int value;
	cout << "Value:" ;
	cin >> value;
	array.push_back(value);
}

void Queue_Class :: Pop()
{
	array.erase(array.begin());
}

void Queue_Class :: Print()
{
	vector<int> :: iterator v = array.begin();
	while(v != array.end())
	{
		cout << *v << endl;
		v++;
	}
}

void Queue_Class :: Top()
{
	cout << *array.begin() << endl;
}

int main()
{
	Queue_Class obj;
	obj.Push();
	obj.Push();
	obj.Push();
	obj.Push();
	obj.Push();
	obj.Push();
	obj.Pop();
	obj.Print();
	obj.Top();
	return 0;
}