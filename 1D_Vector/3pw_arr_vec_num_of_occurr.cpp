#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr_size, count = 0;
    vector<int> v;
    cout << "Enter a size of the array : ";
    cin >> arr_size;
    cout << "Enter the element in the array :" << endl;
    for (int i = 0; i < arr_size; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    int num_count;
    cout << "Enter a number which you want check the number of occurances : ";
    cin >> num_count;
    for (int i = 0; i < v.size(); i++)
    {
        //this if statement use to count the number same element in the array;
        if (v[i] == num_count)
        {
            count++;
        }
    }
    cout << "Number of occurrences is " << count << endl;
    return 0;
}