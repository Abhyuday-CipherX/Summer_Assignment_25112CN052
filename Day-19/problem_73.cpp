// Write a program to Add matrices
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows and columns: ";
    cin>>r>>c;
    int a[r][c],b[r][c],sum[r][c];
    cout<<"Enter the elements of first matrix: ";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cin>>a[i][j];
    }
    cout<<"Enter the elements of second matrix: ";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cin>>b[i][j];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        sum[i][j]=a[i][j]+b[i][j];
    }
    cout<<"Sum of the two matrices: "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cout<<sum[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}