// Write a program to Count words in a sentence.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int count=1;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        count++;
    }
    cout<<"Number of words in the sentence is: "<<count;
    return 0;
}
