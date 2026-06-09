//Write a program to Remove duplicates from array. 
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
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    cout<<"The array after removing duplicates is: ";
    for(auto it:s)
    {
        cout<<it<<" ";
    }
    return 0;
}