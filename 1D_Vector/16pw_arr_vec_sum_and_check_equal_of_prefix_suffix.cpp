//for sum of two equal subarray;
#include<iostream>
#include<vector>
using namespace std;
void sum_and_check_subarray_equal_or_not(vector<int> &arr)
{
    int sum1=0,sum2=0;
    for(int i=0; i<arr.size()/2; i++)
    {
        sum1+=arr[i];
    }
    for(int i=arr.size()-1; i>=arr.size()/2; i--)
    {
        sum2+=arr[i];
    }
    if(sum1==sum2)
    {
        //cout<<"sum of the prefix is " <<sum1<<"sum of the suffix is "<<sum2<<endl;
        cout<<"Equal"<<endl;
    }
    else
    {
        cout<<"Not equal"<<endl;
    }

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
    sum_and_check_subarray_equal_or_not(arr);
    return 0;
}