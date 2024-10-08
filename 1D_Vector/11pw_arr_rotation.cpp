#include<iostream>
using namespace std;
int main()
{
    int arr_size;
    cout<<"Enter the size of array :";
    cin>>arr_size;
    int arr[arr_size];
    //inserting element inside the array;
    for(int i=0; i<arr_size;i++)
    { 
        cin>>arr[i];
    }
    int user;
    cout<<"Enter the position : ";
    cin>>user;
    user = user%arr_size;
    int copyarr[arr_size];//creating 2nd array to store element of 1st array of all elements
    int j=0;
    //inserting last k elements in copyarr
    for(int i=arr_size - user; i<arr_size; i++)
    {
        copyarr[j]=arr[i];
        j++;
    }
    //inserting first k elements in copyarr
    for(int i=0; i<=user;i++)
    {
        copyarr[j]=arr[i];
        j++;
    }
    //printing rotated array
    for(int i=0; i<arr_size;i++)
    {
        cout<<copyarr[i];
    }

    return 0;
}