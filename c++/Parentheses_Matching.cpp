#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

class Parenthesis_matching
{
public:
	string get_string();
	bool Check_parenthesis(string str);
private:
	vector<int> v;
};

string Parenthesis_matching :: get_string()
{
	string str;
	cin >> str;
	return str;
}

bool Parenthesis_matching :: Check_parenthesis(string str)
{
	int count = 0;
	// cout << str.size() << endl;
	while(count != str.size())
	{
		if(str[count] == '{' or str[count] == '[' or str[count] == '(')
		{
			v.push_back(str[count]);
			// cout << count <<" Push" << endl;
		}

		else if(str[count] == '}' or str[count] == ']' or str[count] == ')')
		{
			if((v.size() == 0) or (str[count] == '}' and *v.end() == '{')
				 or (str[count] == ']' and *v.end() == '[')
				 or (str[count] == ')' and *v.end() == '('))
			{
				// cout << "Returned False" << endl;
				return 0;
			}
			else
			{
				v.pop_back();
				// cout << "Pop " << count << " Complete" << endl;
			}
		}
		count++;
	}
	if(v.size() != 0)
		return 0;
	else
		return 1;

}

int main()
{
	Parenthesis_matching obj;
	string str = obj.get_string();
	int check = obj.Check_parenthesis(str);
	if(check == 1)
		cout << "Balanced" << endl;
	else
		cout << "Unbalanced" << endl;
	// cout << "Check --> " << check << endl;
	return 0;
}