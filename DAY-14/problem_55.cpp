//Write a program to Second largest element. 
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
    int max=arr[0];
    int secondmax=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            secondmax=max;
            max=arr[i];
        }
        else if(arr[i]>secondmax && arr[i]!=max)
        secondmax=arr[i];

    }
    cout<<"The second largest element in the array is: "<<secondmax;
    return 0;
}