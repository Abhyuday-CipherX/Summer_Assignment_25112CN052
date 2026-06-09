//Write a program to Reverse a number.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int rev=0;
    while(num!=0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    cout<<"The reverse of the given number is: "<<rev<<endl;
    return 0;
}