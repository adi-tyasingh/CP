#include <bits/stdc++.h>
using namespace std;

int solve()
{
  string s,res;
  cin>>s;
  res = s;
  for(int i=s.length()-1; i>-1; i--)
  {
    res = res + s[i];
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