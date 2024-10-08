#include<iostream>
#include<vector>
using namespace std;
void nonDec_order_array(vector<int> &arr)
{
   int left=0;
   int right= arr.size()-1;
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = arr[i]*arr[i];
    }
   while (left<right)
   {
      if(arr[left] > arr[right])
      { 
        left++;
      }
      if(arr[left] < arr[right])
      {
        swap(arr[left],arr[right]);
        right--;
        left++;
      }
   }
   return;
} 
int main()
{
    int arr_size;
    vector<int>arr;
    cout<<"Enter the array size : ";
    cin>>arr_size;
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0;i<arr_size;i++)
    {
        int element;
        cin>>element;
        arr.push_back(element);
    }
    nonDec_order_array(arr);
    for (int i = arr.size()-1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}