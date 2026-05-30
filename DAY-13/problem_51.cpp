//Write a program to Find largest and smallest element. 
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
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }
    cout<<"The largest element in the array is: "<<max<<endl;
    cout<<"The smallest element in the array is: "<<min<<endl;
    return 0;
}