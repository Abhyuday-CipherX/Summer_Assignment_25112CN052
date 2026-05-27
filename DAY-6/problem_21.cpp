// Write a program to Convert decimal to binary.
#include<bits/stdc++.h>
using namespace std;
int decimalToBinary(int n)
{
    int binary=0,place=1;
    while(n>0)
    {
        int rem=n%2;
        binary+=rem*place;
        place*=10;
        n/=2;
    }
    return binary;
}
int main()
{
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    cout<<"The binary conversion of "<<n<<" is: "<<decimalToBinary(n);
    return 0;
}