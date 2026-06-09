//Write a program to Find GCD of two numbers.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the two numbers: ";
    cin>>num1>>num2;
    int minimum = min(num1,num2);
    int gcd=1;
    for(int i=1;i<=minimum;i++)
    {
        if(num1%i==0 && num2%i==0)
        gcd=i;
    }
    cout<<"The GCD of "<<num1<<" and "<<num2<<" is: "<<gcd<<endl;
    return 0;
}