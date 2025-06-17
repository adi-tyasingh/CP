#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0; cin>>n;
    string str;
    cin>>str;
    char c = str[1];
    for(int i=0;i<n-1;i++)
    {
        cin>>str;
        if(str[0]==c){
            ans++;
        } 
        c= str[1];
    }
    ans++;
    cout<<ans<<endl;
}