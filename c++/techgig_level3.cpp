/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//give an array
//print largest number followed by a space and then second largest number followed by space
// and then rest of the array in same order, similiar to that of input order.

vector<int> find_max(vector<int> array)
{
    vector<int> :: iterator mx = max_element(array.begin(), array.end());
    vector<int> :: iterator end = remove(array.begin(), array.end(), *mx);
    array.erase(end, array.end());

    return array;
}

void modify_array(vector<int> array)
{
    vector<int> copy;
    
    vector<int> :: iterator mx = max_element(array.begin(), array.end());
    // cout << "max is : " << *mx << endl;
    copy.push_back(*mx);
    array = find_max(array);
    
    mx = max_element(array.begin(), array.end());
    copy.push_back(*mx);
    array = find_max(array);
    
    vector<int> :: iterator it = array.begin();
    while(it!=array.end())
    {
        copy.push_back(*it);
        it++;
    }
    it = copy.begin();
    cout << *it;
    it++;
    while(it!= copy.end())
    {
        cout << " ";
        cout << *it;
        it++;
    }
}

int main()
{
    //Write code here
    int array_len=0, item=0;
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

        modify_array(array);

    return 0;
}