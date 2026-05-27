//Write a program to Count set bits in a number.
#include<bits/stdc++.h>
using namespace std;
int countSetBits(int n)
{
    int count=0;
    while(n>0)
    {
        count+=n&1;
        n>>=1;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The number of set bits in "<<n<<" is: "<<countSetBits(n);
    return 0;
}