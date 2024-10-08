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
    // this for loop is use to print the  arraay;
    for (int i = 0; i < v.size(); i++) // v.size use to calcuclate the the length of array;
    {
        cout << v[i] << " ";
    }
    return 0;
}