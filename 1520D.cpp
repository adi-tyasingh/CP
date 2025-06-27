#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  vector<long long>v(n);
  for(int i=0; i<n; i++)
  {
    cin>>v[i];
  }
  long long res = 0;
  map<long long, long long>mp;
  for(int i=n-1; i>-1; i--)
  {
    res += mp[v[i]-i-1];
    mp[v[i]-i-1]++;
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