//Write a program to Recursive Fibonacci
#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Fibonacci of "<<n<<" is : "<<fibonacci(n);
    return 0;
}