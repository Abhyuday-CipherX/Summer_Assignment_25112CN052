// Write a program to Find row-wise sum.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int m;
    cout<<"Enter the number of coloumns: ";
    cin>>m;
    int a[n][m];
    cout<<"Enter the elements of matrix: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Row-wise sum: "<<endl;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=a[i][j];
        }
        cout<<"Row "<<i+1<<": "<<sum<<endl;
    }
    return 0;
}