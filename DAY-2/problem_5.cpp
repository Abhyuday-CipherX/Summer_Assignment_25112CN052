//Write a program to Find sum of digits of a number.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout <<"Enter the number: ";
    cin>>num;
    int sum = 0;
    while(num!=0)
    {
        sum+=num%10;
        num=num/10;
    } 
    cout<<"The sum of digits of the given number is: "<<sum<<endl;
    return 0;
}