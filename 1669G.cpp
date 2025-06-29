#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, m;
  cin>>n>>m;
  vector<string>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }

  for(int i=0; i<m; i++)
  {
    int obs = n-1;
    for(int j=n-1; j>-1;j--)
    {
        if(vec[j][i]=='o')
        {
            obs = j-1;
        }
        else if(vec[j][i]=='*')
        {
            char tmp = vec[j][i];
            vec[j][i] = vec[obs][i];
            vec[obs][i] = tmp;
            obs = obs - 1;
        }
    }
  }
  for(int i=0; i<n; i++)
    {
        cout<<vec[i]<<endl;
    }
    //cout<<endl;
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