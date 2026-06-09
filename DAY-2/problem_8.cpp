//Write a program to Check whether a number is palindrome.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int original = num;
    int rev = 0;
    while(num!=0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    if(original==rev)
    cout<<"The given number is a palindrome."<<endl;
    else
    cout<<"The given number is not a palindrome."<<endl;
    return 0;
}