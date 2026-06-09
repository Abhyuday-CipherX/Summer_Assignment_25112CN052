//Write a program to Recursive sum of digits. 
#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int n)
{
    if(n==0)
    return 0;
    else 
    return (n%10)+sumOfDigits(n/10);
}
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Sum of Digits of "<<num<<" is : "<<sumOfDigits(num);
    return 0;
}