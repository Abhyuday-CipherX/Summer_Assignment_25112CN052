//Write a program to Find factorial of a number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact*i;
    }
    cout<<"The factorial of "<<num<<" is: "<<fact<<endl;
    return 0;
}