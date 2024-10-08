#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr_size;
    vector<int>arr;
    cout<<"Enter the size of array :";
    cin>>arr_size;
    for(int i=0; i<arr_size;i++)
    {
        int element;
        cin>>element;
        arr.push_back(element);
    }
    int index=-1;
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i]=arr[j]=index;
            }
        }
    }
    int store;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>0)
        {
            store=arr[i];
        }  
    }
    cout<<"unique element "<<store;
    return 0;
}