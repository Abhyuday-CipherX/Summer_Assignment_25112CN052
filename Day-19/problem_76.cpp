// Write a program to Find diagonal sum. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the order of the square matrix: ";
    cin>>n;
    int a[n][n];
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i][i];
    }
    cout<<"The sum of the diagonal elements is: "<<sum<<endl;
    return 0;
}