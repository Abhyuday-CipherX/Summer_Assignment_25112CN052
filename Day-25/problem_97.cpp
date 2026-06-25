// Write a program to Merge two sorted arrays.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter size of first array: ";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter elements of first array: ";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter size of second array: ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter elements of second array: ";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
   vector<int> result;
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2) 
    {
        if (arr1[i] <= arr2[j]) 
        {
            result.push_back(arr1[i]);
            i++;
        } 
        else 
        {
            result.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n1) 
    {
        result.push_back(arr1[i]);
        i++;
    }
    while (j < n2) 
    {
        result.push_back(arr2[j]);
        j++;
    }
    cout << "Merged Array: ";
    for (int num : result) 
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}