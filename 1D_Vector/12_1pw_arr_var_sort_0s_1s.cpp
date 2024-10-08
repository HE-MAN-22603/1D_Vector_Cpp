#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr_size, count = 0;
    vector<int> arr;
    cout << "Enter the size of array.:";
    cin >> arr_size;
    cout << "Enetr the elements( only 0's and 1's) :" << endl;
    for (int i = 0; i < arr_size; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element); // arr_size=6 and elements are: 0 0 0 1 0 1
    }
    // this section is used for count the 0's and 1's;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    int copy_arr[arr_size]; // the use copy array to stored the sorted elements;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i < (count))
        {
            copy_arr[i] = 0; // print 0's untill count become false;
        }
        else
        {
            copy_arr[i] = 1; // after the count false print 1's untill array size;
        }
    }
    cout << "Sorted array of ( only 0's and 1's) elements is :";
    for (int i = 0; i < arr.size(); i++) // to print all the sorted array elements;
    {
        cout << copy_arr[i] << " "; // 0 0 0 0 1 1
    }
}