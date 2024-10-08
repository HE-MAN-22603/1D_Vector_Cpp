#include<iostream>
#include<vector>
using namespace std;
//arr[i]={5, 4, 3, 2, 1, 5};
//index=  0  1  2  3  4  5;
void sum_of_prefix(vector<int> &arr)
{
    for(int i=1; i<arr.size(); i++) //do not take i=0 because if we add ith index value  it will give same output for example  arr[0] = arr[0] + arr[0-1];
    {                                                                                                                         //   5        5  +      0
    //  arr[1] = arr[1] + arr[1-1]; 
    //      9        4  +      5   
    //  arr[i]={5,9,3,2,1,5}

    //  arr[2] = arr[2] + arr[2-1];
    //      12       3  +      9   
    //  arr[i]={5,9,12,2,1,5}

    //  arr[3] = arr[3] + arr[3-1];
    //     14        2  +      12   
    //  arr[i]={5,9,12,14,1,5}

    //  arr[4] = arr[4] + arr[4-1];
    //      15       1  +      14   
    //  arr[i]={5,9,12,14,15,5}

    //  arr[5] = arr[5] + arr[5-1];
    //      20       5  +      15   
    //  arr[i]={5,9,12,14,15,20} output
        arr[i]=arr[i]+arr[i-1];
    }
    return;
}
int main()
{
    int arr_size;
    vector<int>arr;
    cout<<"Enter the size of array : ";
    cin>>arr_size;
    cout<<"Enter the elements of the array : "<<endl;
    for(int i = 0; i<arr_size ; i++)
    {
        int element;
        cin>>element;
        arr.push_back(element);
    }
    sum_of_prefix(arr);
    cout<<"Output : ";
    for(int i=0;i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}