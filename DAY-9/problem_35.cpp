/*Write a program to Print repeated character pattern. 
A 
BB 
CCC 
DDDD 
EEEEE */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    char ch='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
    return 0;
}