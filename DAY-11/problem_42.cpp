//Write a program to Write function to find maximum.
#include<bits/stdc++.h>
using namespace std;
int findmax(int arr[], int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;

}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int max=findmax(arr,n);
    cout<<"The maximum element in the array is: "<<max;
    return 0;
}