//Write a program to Find LCM of two numbers
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the two numbers: ";
    cin>>num1>>num2;
    int maximum = max(num1,num2);
    int lcm=1;
    for(int i=maximum;i<=num1*num2;i++)
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm=i;
            break;
        }

    }
    cout<<"The LCM of "<<num1<<" and "<<num2<<" is: "<<lcm<<endl;
    return 0;
}