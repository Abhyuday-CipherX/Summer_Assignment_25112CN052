//Write a program to Calculate sum of first N natural numbers. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the value of N: ";
    cin>>N;
    int sum = N*(N+1)/2;
    cout<<"The sum of first "<<N<<" natural numbers is: "<<sum<<endl;
    return 0;
}