// Write a program to move zeroes to end.
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
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[count]=arr[i];
            count++;
        }
    }
    while(count<n)
    {
        arr[count]=0;
        count++;
    }
    cout<<"The elements of array after moving zeroes to end are: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}