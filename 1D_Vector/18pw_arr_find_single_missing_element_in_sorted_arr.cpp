#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void arr_sort(vector<int> &arr)
{
    int count=0;
    sort(arr.begin(), arr.end());
    for(int i=0 ; i < arr.size();i++)
    {
        if(arr[i]==count)
        {
            count++;
        }
    }
    cout<<"Missing no. is : "<<count<<endl;
}
int main()
{
    int arr_size;
    vector<int> arr;
    cout<<"Enter the size of array: ";
    cin>>arr_size;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0 ; i < arr_size; i++)
    {
        int element;
        cin>>element;
        arr.push_back(element);
    }
    arr_sort(arr);
    return 0;
}