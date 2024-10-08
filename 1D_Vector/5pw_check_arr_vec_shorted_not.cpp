#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr_size, count = 0;
    vector<int> arr;
    cout << "Enter the size of the array : ";
    cin >> arr_size;
    cout << "Enter the element of the array :" << endl;
    for (int i = 0; i < arr_size; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    bool sort=true;
    for (int i = 1; i < arr.size(); i++)
    {
        //this if statement use to count the element is strictly greater than value  "num_greater" in the array;
        if (arr[i] <  arr[i-1])
        {
            sort=false;
            break;
        }
    }
    cout<<"1 for sorted array and 0 for unsorted array : "<<sort;

 /*
    if we dose not want to use bool then how to return array is sorted or not
    int violations = 0;
    for (int i = 1; i < arr_size; i++)
    {
        // Check if the current element is less than the previous element
        if (arr[i] < arr[i-1])
        {
            violations++; // Increment the counter for each violation
        }
    }

    // Output the result based on the number of violations
    if (violations == 0)
    {
        cout << "Sorted array" << endl;
    }
    else
    {
        cout << "Unsorted array" << endl;
    }

 */
    return 0;
}