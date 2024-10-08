#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
void nonDec_order_array(vector<int> &arr)
{
   vector<int>ans;
   int left=0;
   int right= arr.size()-1;
   while (left<=right)
   {
      if(abs(arr[left]) < abs(arr[right]))
      { 
        ans.push_back(arr[right]*arr[right]);
        right--;
      }
      else
      {
        ans.push_back(arr[left]*arr[left]);
        left++;
      }
   }

   reverse(ans.begin(),ans.end());
   for(int i = 0; i < arr.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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
    
    return 0;
}