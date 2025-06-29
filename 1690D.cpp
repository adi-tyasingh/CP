#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, k;
  cin>>n>>k;
  string s;
  cin>>s;
  vector<int> pref(n+1, 0);
  for(int i=1; i<=n; i++)
  {
    pref[i] =  pref[i-1] + ( s[i-1] == 'W' );
  }

  int res = n+1; 

  for(int i=k; i<=n; i++)
  {
    res = min(res, pref[i] - pref[i-k]);
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