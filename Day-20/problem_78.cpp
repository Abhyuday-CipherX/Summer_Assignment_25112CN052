// Write a program to Check symmetric matrix.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of matrix: ";
    cin>>n;
    int a[n][n];
    cout<<"Enter the elements of matrix: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=false;
                break;
            }
        }
    }
    if(flag)
    {
        cout<<"The matrix is symmetric."<<endl;
    }
    else
    {
        cout<<"The matrix is not symmetric."<<endl;
    }
}