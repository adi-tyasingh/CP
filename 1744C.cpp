#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  char c;
  cin>>n>>c;
  string s;
  cin>>s;
  s = s + s;
  int res = -1, strt=-1;
  bool flag = false; 
  if(c=='g')
  {
    cout<<0<<endl;
    return 0;
  }
  for(int i=0; i<2*n; i++)
  {
    if (!flag && s[i]==c)
    {
        strt = i;
        flag = true;
    }
    else if(flag && s[i]=='g')
    {
        res = max(res, i-strt);
        flag = false;
    }
  }
  cout<<res<<endl;
  return 0;  
}


int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}