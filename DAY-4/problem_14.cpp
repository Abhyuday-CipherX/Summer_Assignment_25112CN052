//Write a program to Find nth Fibonacci term.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the term number: ";
    cin>>n;
    int a=0,b=1;
    for(int i=1;i<n;i++)
    {
        int next = a+b;
        a=b;
        b=next;
    }
    cout<<"The "<<n<<"th term of the Fibonacci series is: "<<a<<endl;
    return 0;
}