//Write a program to Linear search. 
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
    bool found=false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            found=true;
            break;
        }
    }
    if(found)
    cout<<key<<" is present in the array.";
    else
    cout<<key<<" is not present in the array.";
    return 0;
}