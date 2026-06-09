//Write a program to Print prime numbers in a range.
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
    if(num<=1)
    return false;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        return false;
    }
    return true;
}
int main()
{
    int lower,upper;
    cout<<"Enter the lower and upper limit: ";
    cin>>lower>>upper;
    cout<<"Prime number between "<<lower<<" and "<<upper<<" are: ";
    for(int i=lower;i<=upper;i++)
    {
        if(isPrime(i))
        cout<<i<<" ";
    }
    return 0;
}