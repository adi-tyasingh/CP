#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s ;
    cin>>s;
    int count = 0;
    if(s[0]=='4')
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i = 0;i<s.size();i++)
    {
        if(s[i]!='1' && s[i]!='4')
        {
            cout<<"NO"<<endl;
            return 0;
        }
        

        if(s[i]=='4')
        {
            count++;
        }
        else
        {
            count = 0;
        }

        if(count>2)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}