#include <bits/stdc++.h>
using namespace std;

int solve()
{
  string s;
  cin>>s;
  int n, count =0; cin>>n;
  vector<int>v(s.length(),0);
  for(int i=1; i<s.length(); i++)
  {
    if(s[i]==s[i-1])
    {
        count++;
    }
    v[i] = count;
  }

  for(int i=0; i<n; i++)
  {
    int l,r;
    cin>>l>>r;
    int res = v[r-1] - v[l-1];
    cout<<res<<endl; 
  }
  return 0;  
}


int main()
{
  int tc = 1;
  //cin>>tc;
  while(tc--)
  {
    solve();
  }
  return 0;
}