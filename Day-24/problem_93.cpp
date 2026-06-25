// Write a program to Check string rotation. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter first string: ";
    getline(cin,s1);
    cout<<"Enter second string: ";
    getline(cin,s2);
    if(s1.length()!=s2.length())
    {
        cout<<"Strings are not rotations of each other. "<<endl;
    }
    else
    {
        string temp=s1+s2;
        if(temp.find(s2)<temp.length())
        {
            cout<<"Strings are rotations of each other. "<<endl;
        }
        else
        {
            cout<<"strings are not rotations of each other. "<<endl;
        }
    }
    return 0;
    }
