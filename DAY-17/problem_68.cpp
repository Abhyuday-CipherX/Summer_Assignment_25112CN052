//Write a program to Find common elements.
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
    vector<int> common;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                common.push_back(arr1[i]);
                break;
            }

        }

    }
    cout<<"Common elements: ";
    for(int i=0;i<common.size();i++)
    cout<<common[i]<<" ";
    return 0;
}