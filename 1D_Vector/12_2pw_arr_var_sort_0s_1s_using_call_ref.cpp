//this Q we can also done with normal array but we can do this with help of the function;
#include<iostream>
#include<vector>
using namespace std;
void sortarray_usingcall_byreference(vector<int> &arr) //with help of & we perform as a call by reference
{
    int count_zero=0;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]==0)
        {
            count_zero++;
        }
    }
    for(int i = 0; i<arr.size();i++)
    {
        if(i<count_zero)
        {
            arr[i]=0;
        }
        else
        {
            arr[i]=1;
        }
    }
}
int main()
{
    int arr_size;
    vector<int>arr;
    cout<<"Enter the size of the array :";
    cin>>arr_size;
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0; i<arr_size;i++)
    {
        int element;
        cin>>element;
        arr.push_back(element);
    }
    sortarray_usingcall_byreference(arr);
    for(int i=0; i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}