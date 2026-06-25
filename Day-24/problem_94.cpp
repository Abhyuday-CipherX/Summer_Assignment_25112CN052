// Write a program to Compress a string. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    string compressed="";
    int count=1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            compressed+=s[i];
            compressed+=to_string(count);
            count=1;
        }
    }
    cout<<"Compressed string is: "<<compressed<<endl;
    return 0;
}