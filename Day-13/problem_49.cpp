//Write a program to Input and display array.
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
    cout<<"The elements of array are: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}