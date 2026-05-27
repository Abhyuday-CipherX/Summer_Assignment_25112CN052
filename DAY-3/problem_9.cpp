//Write a program to Check whether a number is prime. 
#include<iostream>
using namespace std;
int main()
{
    int num,flag=0,i;
    cout<<"Enter a positive number: ";
    cin>>num;
    for(i=1;i<=num;i++)
{
        if(num%i==0)
        {
            flag++;
        }
}
     if(flag==2)
     {
        cout<<"The number is prime number";
     }
     else
     {
        cout<<"The number is not a prime number";
     }
     return 0;
    }