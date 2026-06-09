//Write a program to Check Armstrong number.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,original,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    original=num;
    int count=0;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    num=original;
    while(num!=0)
    {
        int digit = num%10;
        sum+=pow(digit,count);
        num=num/10;
    }
    if(original==sum)
    cout<<"The given numer is an Armstrong number."<<endl;
    else
    cout<<"The given number is not an Armstrong number."<<endl;
    return 0;
}