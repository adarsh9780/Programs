/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//given an array and a number
// return the number of pairs of integers in the array whose sum is equal tp given number.

vector<int> find_max(vector<int> array)
{
    vector<int> :: iterator mx = max_element(array.begin(), array.end());
    vector<int> :: iterator end = remove(array.begin(), array.end(), *mx);
    array.erase(end, array.end());

    return array;
}

int modify_array(int num, vector<int> array)
{
    int count = 0;
    vector<int> :: iterator first = array.begin();
    vector<int> :: iterator second = first + 1;

    while(second != array.end())
    {
        if(*first + *second == num)
        {
            count++;
        }
        second++;
        first++;
    }
    return count;
}

int main()
{
    //Write code here
    int array_len=0, item=0, num=0, count=0;
    vector<int> array, copy;
    cin >> array_len;
    // cout << "Array length is : " << array_len << endl;
    while(array_len != 0)
    {
        cin >> item;
        array.push_back(item);
        array_len--;
        // cout << "array_len is : " << array_len << endl;
    }

    cin >> num;

    count = modify_array(num, array);
    cout << count << endl;

    return 0;
}