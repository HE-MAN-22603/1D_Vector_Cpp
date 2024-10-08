#include<iostream>
#include<vector>
using namespace std;
void sort0sAnd1s_ArrayUsing_TowPointer(vector<int> &arr)
{
    int left=0;
    int right=arr.size()-1;
    while (left<right)
    {
        /*
        if(arr[left]==1 && arr[right]==0)
        {
            arr[left]=0; swapping 
            arr[right]=1;
            left++;
            right--;
        }
        */
       // we can use both method;
        if(arr[left]>arr[right]) //arr= 1  0  0  1  0
        {                       //      L           R    1 > 0 true swaped L++ R--
                               //       0  0  0  1  1
                              //           L     R     
            int temp = arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
        if(arr[left]==0) /*arr= 0  0  0  1  1
                                   L     R     1 > 0 false
                                   L     R     L==0  true L++ */
        {
            left++;
        }
        if(arr[right]==1)
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
    sort0sAnd1s_ArrayUsing_TowPointer(arr);
    cout<<"Sorted array is : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}