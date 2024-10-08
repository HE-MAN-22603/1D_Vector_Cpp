#include<iostream>
#include<vector>
using namespace std;
void sortevenAndodd_ArrayUsing_TowPointer(vector<int> &arr)
{
    int left=0;
    int right=arr.size()-1;

    while (left<right)
    {

        if(arr[left]%2==1 && arr[right]%2==0)
        {                       
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        if(arr[left]%2==0) 
        {
            left++;
        }
        if(arr[right]%2==1)
        {
            right--;
        }

    }
    return;
    
}
int main()
{
    int arr_size;
    vector<int>arr;
    cout<<"Enter the size of array : ";
    cin>>arr_size;
    cout<<"Enter the elements of the array :"<<endl;
    for (int i = 0; i < arr_size; i++)
    {
        int element;
        cin>>element;
        arr.push_back(element);
    }
    sortevenAndodd_ArrayUsing_TowPointer(arr);
    cout<<"Sorted even and odd array is : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}