//Write a program to Find x^n without pow(). 
#include<bits/stdc++.h>
using namespace std;
double myPow(double x, int n)
{
    if(n==0)
    return 1;
    double temp=myPow(x,n/2);
    if(n%2==0)
    return temp*temp;
    else
    {
        if(n>0)
        return x*temp*temp;
        else
        return (temp*temp)/x;
    }

}
int main()
{
    double x;
    int n;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<"Enter the power : ";
    cin>>n;
    cout<<x<<" raised to the power "<<n<<" is: "<<myPow(x,n);
    return 0;
}