#include<iostream>
#include<vector>
using namespace std;
int sumOf_l1r1_to_l2r2_matrix(vector<vector<int>>&matrix, int l1, int r1, int l2,  int r2)
{
    int add = 0;
    for(int i= l1; i<= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            add = add + matrix[i][j];
        }
    }
    return add;
}
int main()
{
    int n, m;
    cout<<"Enter the size of matrix(nXm)."<<endl;
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    cout<<"Enter Enlements"<<endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cin>>matrix[i][j];
        }
    }
    int l1,r1,l2,r2;
    cout<<"Enter the value of (l1, r1) and (l2, r2) :"<<endl;
    cin>>l1>>r1>>l2>>r2;
    int sum = sumOf_l1r1_to_l2r2_matrix(matrix,l1,r1,l2,r2);
    cout<<"Sum: "<<sum<<endl;

    return 0;
}