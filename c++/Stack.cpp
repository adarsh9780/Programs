#include <iostream>
#include <vector>
using namespace std;

class Stack_Class
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

void Stack_Class :: Push()
{
	int value;
	cout << "Value:" ;
	cin >> value;
	array.push_back(value);
}

void Stack_Class :: Pop()
{
	array.pop_back();
}

void Stack_Class :: Print()
{
	vector<int> :: iterator v = array.end();
	while(v != array.begin())
	{
		cout << *v << endl;
		v--;
	}
	cout << *array.begin() << endl;
}

void Stack_Class :: Top()
{
	cout << *array.end() << endl;
}

int main()
{
	Stack_Class obj;
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