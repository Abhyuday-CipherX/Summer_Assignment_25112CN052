//Write a program to Find missing number in array. 
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
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=arr[i];
    int total=n*(n+1)/2;
    int missing=total-sum;
    cout<<"The missing number in the array is: "<<missing;
    return 0;
}