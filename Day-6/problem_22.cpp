//Write a program to Convert binary to decimal.
#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
    int decimal=0,place=1;
    while(n>0)
    {
        int rem=rem%10;
        decimal+=rem*place;
        place*2;
        n/=10;
    }
    return decimal;
}
int main()
{
    int n;
    cout<<"Enter a bianary number: ";
    cin>>n;
    cout<<"The decimal conversion of "<<n<<" is: "<<binaryToDecimal(n);
    return 0;
}