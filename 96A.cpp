#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin>>str;
  int count=0;
  int county=0;
  for(int i=0;i<str.length();i++)
  {
    if(count==0 && str[i]=='1')
      count++;
    else if(count>0 && str[i]=='1')
      count++;
    else if(count>0 && str[i]=='0')
      count = 0;

    if(county==0 && str[i]=='0')
      county++;
    else if(county>0 && str[i]=='0')
      county++;
    else if(county>0 && str[i]=='1')
      county = 0;

    if(count>=7 || county>=7)
    {
      cout<<"YES\n";
      return 0;
    }
  }
  cout<<"NO\n";
  return 0;
 
}