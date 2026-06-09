//Write a program to Print multiplication table of a given number. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: "; // Input a number from the user
    cin>>num;
    for(int i=1;i<=10;i++)
    {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl; // Printing the table
    }
    return 0;
}