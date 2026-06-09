//Write a program to Check strong number.
#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==0 || n==1)
    return 1;
    else return n*factorial(n-1);
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int temp=num,sum=0;
    while(temp>0)
    {
        int digit=temp%10;
        sum+=factorial(digit);
        temp/=10;
    }
    if(sum==num)
    cout<<num<<" is a strong number. ";
    else
    cout<<num<<" is not a strong number. ";
    return 0;
}