//this code work for both dublicat element as well as unique
#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr_size;
    cout << "Enter the size of array : ";
    cin >> arr_size;
    int arr[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }
    int max = INT_MIN; //or we can use max=arr[0];
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int secmax = INT_MIN;
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] > secmax && arr[i]!=max)//main concept
        {
            secmax = arr[i];
        }
    }
    cout << "Second largest value : " << secmax;
    return 0;
}