#include<iostream>
#include<vector>
using namespace std;
bool sum_of_prefix_suffix_is_equal_or_not_using_singl_loop(vector<int> &arr)
{
    int prefixsum=0, suffixsum, total=0;
    for(int i=0 ; i<arr.size(); i++)
    {
        total = total + arr[i];//claculating total/sum of the array;
    }
    for(int i=0 ; i<arr.size(); i++)
    {
        prefixsum = prefixsum + arr[i];
        suffixsum = total - prefixsum;//<-- formula ;how this formula is created "prefixsum[i] + suffixsum[i+1] = total "; 
                                     //so when we calculate suffix you can remember this formula " suffixsum = total - prefixsum " ;
        if(prefixsum == suffixsum)
        {
            return true;
        }
    }
    return false;
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
    cout<<"Ans:"<<sum_of_prefix_suffix_is_equal_or_not_using_singl_loop(arr)<<endl;//<---if you use bool function it must be use this writting formate.
    // if not use this formate the code will be run perfactly but no output will be printed
    return 0;
}