// Write a program to Remove spaces from string. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    string newstr="";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=' ')
        newstr+= str[i];
    }
    cout<<"String after removing spaces is: "<<newstr;
    return 0;
}