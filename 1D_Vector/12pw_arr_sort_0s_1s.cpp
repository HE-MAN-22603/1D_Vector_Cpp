#include<iostream>
using namespace std;
// int main()
// {
//     int arr_size,cot_zeros=0,cot_once=0,i;
//     cout<<"Enter the array size :";
//     cin>>arr_size;
//     int arr[arr_size];
//     cout<<"Enetr the elements( only 0's and 1's) :"<<endl;
//     for(i =0; i<arr_size;i++)
//     {
//         cin>>arr[i];
//     }
//     for(i=0; i<arr_size;i++)
//     {
//         if(arr[i]==0)
//         {
//             cot_zeros++;
//         }
//         else
//         {
//             cot_once++;
//         }
//     }
//     int copy_arr[arr_size];
//     // int zeros=0,once=1;
//     for(i=0; i<cot_zeros;i++)
//     {
//         copy_arr[i]=0;
//     }
//     for(i=cot_zeros; i<arr_size;i++)
//     {
//         copy_arr[i]=1;
//     }
//     cout<<"Zeros :"<<cot_zeros<<" and onces :"<<cot_once<<endl;
//     cout<<"Sorted array of ( only 0's and 1's) elements is :" ;
//     for(i=0; i<arr_size;i++)
//     {
//          cout<<copy_arr[i]<<" ";
//     }
   
//     return 0;
// }

                                                                            //OR

int main()
{
    int arr_size,cot_zeros=0,cot_once=0,i;
    cout<<"Enter the array size :";
    cin>>arr_size;
    int arr[arr_size];
    cout<<"Enetr the elements( only 0's and 1's) :"<<endl;
    for(i =0; i<arr_size;i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<arr_size;i++)
    {
        if(arr[i]==0)
        {
            cot_zeros++;
        }
        else
        {
            cot_once++;
        }
    }
    int copy_arr[arr_size];
    for(i=0; i<arr_size;i++)
    {
        if(i<(cot_zeros))
        {
            copy_arr[i]=0;
        }
        else
        {
           copy_arr[i]=1;
        }
    }
    cout<<"Zeros :"<<cot_zeros<<" and onces :"<<cot_once<<endl;
    cout<<"Sorted array of ( only 0's and 1's) elements is :" ;
    for(i=0; i<arr_size;i++)
    {
         cout<<copy_arr[i]<<" ";
    }
    return 0;
}