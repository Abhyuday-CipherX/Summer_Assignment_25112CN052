//Write a program to Calculate sum of first N natural numbers. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the value of N: ";  // Input a number N from the user
    cin>>N;
    int sum = N*(N+1)/2; // Calculate the sum of first N natural numbers using the formula N*(N+1)/2
    cout<<"The sum of first "<<N<<" natural numbers is: "<<sum<<endl;
    return 0;
}