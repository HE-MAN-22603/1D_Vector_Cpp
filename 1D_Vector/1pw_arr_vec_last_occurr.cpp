#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    vector<int> v; // syntex vector<data_type>variable_name;
    cout << "Enter a size of array : ";
    cin >> num;
    // this for loop is used to take the element from the user;
    cout << "Enter the element in the array : " << endl;
    for (int i = 0; i < num; i++)
    {
        int element; // local variable;
        cin >> element;
        v.push_back(element); // v.push_back(local_variable_name) store the element from the last
    }
    // now we write a code to find out the occurrence of an element;
    int occur = -1; //-1 if element not present in the array;
    int index;
    cout << "Enter a element which you want check : ";
    cin >> index;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == index)
        {
            occur = i;
        }
    }
    cout << "Last occurrence of an element is " << occur << endl;
    return 0;
}
