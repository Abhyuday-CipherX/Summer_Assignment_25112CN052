//Write a program to Find largest prime factor. 
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n<=1)
    return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int largePrime=-1;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0 && isPrime(i))
        largePrime=i;
    }
    if(largePrime!=-1)
    cout<<"The largest prime factor of "<<n<<" is: "<<largePrime;
    else
    cout<<n<<" has no prime factors. ";
    return 0;

}