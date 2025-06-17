#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n,m;
  cin>>n>>m;
  set<int>s;
  vector<int>vec(n), unique(n);
  for (int i=0; i<n; i++)
  {
    cin>>vec[i];
  }

  for (int i=n-1; i>-1; i--)
  {
    s.insert(vec[i]);
    unique[i] = s.size();
  }

  for(int i=0; i<m; i++)
  {
    int q;
    cin>>q;
    cout<<unique[q-1]<<endl;
  }

  return 0;  
}


int main()
{
  int tc=1;
  //cin>>tc;
  while(tc--)
  {
    solve();
  }

}