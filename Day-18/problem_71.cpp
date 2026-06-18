//Write a program to Binary search.
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
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==key)
        {
            cout<<"Element found at index: "<<mid;
            return 0;
        }
        else if(arr[mid]<key)
        low=mid+1;
        else
        high=mid-1;
    }
    cout<<"Element not found in the array.";
    return 0;
}
