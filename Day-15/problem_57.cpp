//Write a program to Reverse array. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"The elements of array in reverse order are: ";
    for(int i=n-1;i>=0;i--)
    cout<<arr[i]<<" ";
    return 0;
}