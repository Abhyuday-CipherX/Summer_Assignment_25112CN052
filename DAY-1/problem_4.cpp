//Write a program to Count digits in a number. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int count=0;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    cout<<"The number of digits in the given number is: "<<count<<endl;
    return 0;
}
