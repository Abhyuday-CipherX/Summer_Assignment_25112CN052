//Write a program to Frequency of an element.
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
    cout<<"Enter the element to find frequency: ";
    cin>>key;
    int freq=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        freq++;

    }
    cout<<"The frequency of "<<key<<" in the array is: "<<freq;
    return 0;
}