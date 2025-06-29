#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, m;
  cin>>n>>m;
  vector<vector<int>>vec(n, vector<int>(m));
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      cin>>vec[i][j];
    }
  }
  long long res = 0;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      long long score = 0;
      int ti=i,tj=j;
      while(ti<n && ti>=0 && tj<m && tj>=0)
      {
        score += vec[ti][tj];
        ti++;
        tj++;
      }
      ti=i;
      tj=j;
      while(ti<n && ti>=0 && tj<m && tj>=0)
      {
        score += vec[ti][tj];
        ti--;
        tj++;
      }
      ti=i;
      tj=j;
      while(ti<n && ti>=0 && tj<m && tj>=0)
      {
        score += vec[ti][tj];
        ti++;
        tj--;
      }
      ti=i;
      tj=j;
      while(ti<n && ti>=0 && tj<m && tj>=0)
      {
        score += vec[ti][tj];
        ti--;
        tj--;
      }
      score -= 3*vec[i][j];
      res = max(res, score);
    }
  }
  cout<<res<<endl;
  return 0; 
}


int main()
{
  int tc=1;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}