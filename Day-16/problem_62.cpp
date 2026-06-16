//Write a program to Find maximum frequency element. 
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
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    mp[arr[i]]++;
    int max_freq=0;
    for(auto it:mp)
    {
        if(it.second>max_freq)
        max_freq=it.second;
    }
    cout<<"The maximum frequency element is: ";
    for(auto it:mp)
    {
        if(it.second==max_freq)
        cout<<it.first<<" ";
    }
    return 0;
}