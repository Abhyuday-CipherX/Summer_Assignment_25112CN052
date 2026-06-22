// Write a program to Find string length without strlen().
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int length=0;
    for(char c:str)
    {
        length++;
    }
    cout<<"Length of the string: "<<length<<endl;
    return 0;
}