#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str; cin>>str;
  int lCount=0;
  bool h=false,e=false,l=false,o=false;
  for(int i=0;i<str.length();i++)
  {
    if(str[i]=='h') h=true;
    else if(str[i]=='e' && h) e=true;
    else if(str[i]=='l' && e) 
    {
      lCount++;
      if(lCount>=2) l=true;
    }
    else if(str[i]=='o' && l)
    {
      o=true;
    }
  }
  if(o==true)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
}