#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, m = 1e8;
  cin>>n;
  long long res = 0;
  vector<int>vec(n);
  for(int i=0; i<n ;i++)
  {
    cin>>vec[i];
    m = min(m, vec[i]);
  }
  for(int i=0; i<n; i++)
  {
    res += vec[i] - m;
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