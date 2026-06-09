//Write a program to Count even and odd elements.
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
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    cout<<"The number of even elements in the array is: "<<even<<endl;
    cout<<"The number of odd elements in the array is: "<<odd;
    return 0;
}