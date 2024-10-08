#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr_size,even=0,odd=0;
    vector<int>arr;
    cout<<"Enter the size of array : ";
    cin>>arr_size;
    cout << "Enter the element of the array :" << endl;
    for(int i=0; i<arr_size;i++)
    {
        int element;
        cin>>element;
        arr.push_back(element);
    }
    for(int i=0; i < arr.size(); i++)
    {
        if(arr[i]%2==0)
        {
            even=even+arr[i];
        }
        else
        {
            odd=odd+arr[i];
        }
    }

    cout<<"The differenc b/w even and odd :  "<<even-odd;
    return 0;
}