/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int max1, int max2, vector<int> array)
{
    cout << max1 << " " << max2 << " ";
    vector<int> :: iterator it = array.begin();
    while(it != array.end())
    {
        if(*it != max1 && *it != max2)
        {
            cout << *it << " ";
        }
        it++;
    }
}

int main()
{
    //Write code here
    int array_len=0, item=0;
    vector<int> array, copy;
    cin >> array_len;
    cout << "Array length is : " << array_len << endl;
    while(array_len != 0)
    {
        cin >> item;
        array.push_back(item);
        array_len--;
        cout << "array_len is : " << array_len << endl;
    }

    copy = array;
    
    sort(array.begin(), array.end());
    int max1 = *(array.end()-1);
    int max2 = *(array.end()-2);

    vector<int> :: iterator it = array.begin();
    while(it != array.end())
    {
        cout << *it << endl;
        it++;
    }

    print(max1, max2, copy);

    cout << "Max1 : " << max1 << endl;
    cout << "Max2 : " << max2 << endl;
    // print(max1, max2, array);

    return 0;
}
