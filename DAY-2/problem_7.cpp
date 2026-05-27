//Write a program to Find product of digits.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int product = 1;
    while(num!=0)
    {
        product*=num%10;
        num=num/10;
    }
    cout<<"The product of digits of the given number is: "<<product<<endl;
    return 0;
}