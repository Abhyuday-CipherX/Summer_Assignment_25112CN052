//Write a program to Find pair with given sum. 
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n, sum;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    cout << "Enter the sum: ";
    cin >> sum;
    unordered_set<int> s;
    bool found = false;
    for (int i = 0; i < n; i++) 
    {
        int complement = sum - arr[i];
        if (s.find(complement) != s.end()) 
        {
            cout << "The pair is: " << arr[i] << " " << complement << endl;
            found = true;
        }
        s.insert(arr[i]);
    }
    if (!found) 
    {
        cout << "No pair found with the given sum." << endl;
    }
    return 0;
}