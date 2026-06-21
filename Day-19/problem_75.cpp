// Write a program to Transpose matrix. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the number of rows and coloumns: ";
    cin>>n>>n;
    int a[n][n];
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The transpose of the matrix is: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}