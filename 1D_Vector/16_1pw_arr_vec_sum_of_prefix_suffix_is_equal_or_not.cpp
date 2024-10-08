//using two for loop;
#include<iostream>
#include<vector>
using namespace std;
void sum_of_prefix_suffix_IS_equal_or_Not(vector<int> &arr)
{
    int prefixsum=0,suffixsum;
    for(int i=0; i<arr.size(); i++)
    {
        prefixsum=prefixsum + arr[i];
        suffixsum=0;
        for(int j=i+1; j<arr.size(); j++)
        {
            suffixsum=suffixsum + arr[j];
        }
        if(prefixsum==suffixsum)
        {
            //cout<<prefixsum<<" = "<<suffixsum<<" Equal";
            cout<<" Equal";
            return;
        }
    }
    cout<<"Not Equal";
}
int main()
{
    int arr_size;
    vector<int>arr;
    cout<<"Enter the size of the array :";
    cin>>arr_size;
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0;i<arr_size;i++)
    {
        int element;
        cin>>element;
        arr.push_back(element);
    }
    sum_of_prefix_suffix_IS_equal_or_Not(arr);
    return 0;
}