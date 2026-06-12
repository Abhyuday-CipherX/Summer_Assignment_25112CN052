//Write a program to Write function for perfect number. 
#include<bits/stdc++.h>
using namespace std;
bool isperfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)
    return true;
    
    else 
    return false;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isperfect(n))
    cout<<n<<" is a perfect number.";
    else
    cout<<n<<" is not a perfect number.";
    return 0;
}