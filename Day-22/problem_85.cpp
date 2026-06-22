// Write a program to Check palindrome string.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    string newstr="";
    for(int i=str.length()-1;i>=0;i--)
    {
        newstr+= str[i];
    }
if(str==newstr)
cout<<"Palindrome String";
else 
cout<<"Not a Palindrome String";
return 0;
}
