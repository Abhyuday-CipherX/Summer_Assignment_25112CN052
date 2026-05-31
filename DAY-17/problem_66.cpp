//Write a program to Union of arrays.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter the size of first array: ";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter the elements of first array: ";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the size of second array: ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    set<int> s;
    for(int i=0;i<n1;i++)
    {
        s.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++)
    {
        s.insert(arr2[i]);
    }
    cout<<"Union of arrays: ";
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}