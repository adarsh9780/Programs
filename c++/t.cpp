/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Write code here
    int len_of_array;
    int item=0, count=0;
    int num_to_match;
    vector<int> array;
    
    cout << "Length of array : ";
    cin >> len_of_array;
    while(len_of_array!=0)
    {
        cin >> item;
        array.push_back(item);
        len_of_array--;
    }
    cout << "Length of array now : " << len_of_array << endl; 
    
    cout << "Before Matching : " << count << endl;
    
    vector<int> :: iterator it = array.begin();
    
    cout << "Value to be Matched : ";
    cin >> num_to_match;
    
    cout << "Print\n";
    while(it != array.end())
    {
        cout << *it << endl;
        if(*it > num_to_match)
        {
            cout << *it << "==" << num_to_match << endl;
            count = count + 1;
        }
        it++;
        // count = count-1;
    }
    cout << "count is :" << count << endl;
    return 0;
}