#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string str;
    int u=0,l=0;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a'&& str[i]<='z')
        {
            l++;
        }
        else
        {
            u++;
        }
    }
    if(u>l)
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='a'&& str[i]<='z')
            {
                cout<<(char)(str[i]-'a'+'A');
            }
            else
            {
                cout<<str[i];
            }
        }
    }
    else
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='A'&& str[i]<='Z')
            {
                cout<<(char)(str[i]-'A'+'a');
            }
            else
            {
                cout<<str[i];
            }
        }
    }
}