//Write a program to Rotate array left. 
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
    int d;
    cout<<"Enter the number pf positions to rotate: ";
    cin>>d;
    d=d%n;
    cout<<"The elements of the array after rotating left are: ";
    for(int i=d;i<n;i++)
    cout<<arr[i]<<" ";
    for(int i=0;i<d;i++)
    cout<<arr[i]<<" ";
    return 0;
}