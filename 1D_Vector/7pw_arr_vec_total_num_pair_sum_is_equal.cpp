#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr_size,i,j,target,pair=0;
    vector<int>arr;
    cout<<"Enter the size of array : ";
    cin>>arr_size;
    for(i=0;i<arr_size;i++)
    {
        int element;
        cin>>element;
        arr.push_back(element);
    }
    cout<<"Enter sum of the targeted value :";
    cin>>target;
    for(i=0;i<arr.size();i++)
    {
        for(j=i+1;j<arr.size();j++)
        {
            if(arr[i]+arr[j]==target)
            {
                pair++;
            }
        }
    }
    cout<<pair;

}