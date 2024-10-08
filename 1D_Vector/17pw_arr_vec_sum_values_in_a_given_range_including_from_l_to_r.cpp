#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr_size;
    cout<<"Enter the size of array :";
    cin>>arr_size;
    vector<int>arr(arr_size + 1, 0); //arr_size + 1 we use because given the qustion is provided " 1-based " conditions it mians the index
                                       //element is insrted at the 1st position/index;
                                       // the work of the " 0 " is fill the all position/index with zero value of the array before the element entered;
    for(int i=1; i<=arr_size; i++)
    {
        cin>>arr[i];
        //1 2 3 4 5;
    }
    //calculating first prefix sum then we apply Quarry based logic;
    for(int i =1; i<=arr_size; i++)
    {
        arr[i]=arr[i] + arr[i-1];
        //0 1 3 6 10 15 (0 is not considered)
        //-->l=index[l-1]=index[0]
        //------>r=index[3]
        
    }
    int no_qu;
    cout<<"Enter the number of the quarry : ";
    cin>>no_qu;

    while(no_qu--)//to track the quarry which is given by the user;
    {
        int range,ln,sum=0;
        cout<<"Enter the 'l' and 'r' ";
        cin>>ln>>range;
        //sum=prefixsum[range]- prefix[ln]; <-- formula
        sum=arr[range]- arr[ln-1] ;
        cout<<"Sum is : "<<sum<<endl;
    }
    return 0;
}