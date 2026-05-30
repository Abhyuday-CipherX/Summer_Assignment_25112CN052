//Write a program to Find sum and average of array. 
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
    double avg=(double)sum/n;
    cout<<"The sum of array is: "<<sum<<endl;
    cout<<"The average of array is: "<<avg;
    return 0;
}