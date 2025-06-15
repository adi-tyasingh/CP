#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int k, n;
  cin>>k>>n;
  vector<pair<int, int>>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i].first>>vec[i].second;
  }
  sort(vec.begin(), vec.end());
  for(int i=0; i<n; i++)
  {
    if(vec[i].first < k)
    {
        k+= vec[i].second;
    }
    else
    {
        cout<<"NO\n";
        return 0;
    }
  }
  cout<<"YES\n";
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

}