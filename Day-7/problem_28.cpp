//Write a program to Recursive reverse number. 
#include<bits/stdc++.h>
using namespace std;
int reverseNumber(int n,int rev)
{
    if(n==0)
    return rev;
    else
    return reverseNumber(n/10,rev*10+n%10);
}
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Reverse of "<<num<<" is : "<<reverseNumber(num,0);
    return 0;
}