#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr_size,target,pair=0;
    vector<int>arr;
    cout<<"Enter the size of array : ";
    cin>>arr_size;
    for(int i=0;i<arr_size;i++)
    {
        int element;
        cin>>element;
        arr.push_back(element);
    }
    cout<<"Enter sum of target value : ";
    cin>>target;
    for(int i=0; i<arr.size(); i++)
    {
        for (int j =i+1; j <arr.size(); j++)
        {
            for (int k =j+1; k < arr.size(); k++)
            {
                if(arr[i]+arr[j]+arr[k]==target)
                {
                    pair++;
                }
            }
            
        }
        
    }
    cout<<pair;
    return 0;
}