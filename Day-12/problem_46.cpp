//Write a program to Write function for Armstrong.
#include<bits/stdc++.h>
using namespace std;
bool isarmstrong(int n)
{
    int sum=0;
    int temp=n;
    int digits=0;
    while(temp>0)
    {
        temp/=10;
        digits++;
    }
    
    temp=n;

    while(temp>0)
    {
        int rem=temp%10;
        sum+=pow(rem,digits);
        temp/=10;
    }
    if(sum==n)
    return true;
    else 
    return false;
}
int main()
{
    int n;
    cout<<"Enter a number to be checked: ";
    cin>>n;
    if(isarmstrong(n))
    cout<<n<<" is an Armstrong number.";
    else
    cout<<n<<" is not an Armstrong number. ";
    return 0;
}