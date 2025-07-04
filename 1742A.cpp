#include <bits/stdc++.h>
using namespace std;

int solve()
{
  vector<int>v(3);
  cin>>v[0]>>v[1]>>v[2];
  sort(v.begin(), v.end());
  if(v[2]==v[1]+v[0])
  {
    cout<<"YES\n";
  }
  else
  {
    cout<<"NO\n";
  }
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