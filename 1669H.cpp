#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long n,k;
  cin>>n>>k;
  set<int>s;
  vector<int>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }
  for(int j=30; j>-1; j--)
  {
    int count = 0;
    for(int i=0; i<n; i++)
    {
        int tmp = 1<<j;
        if(tmp&vec[i])
        {
            count++;
        }
    }
    if((n-count) <= k)
    {
        k -= (n-count);
        s.insert(j);
    }
  }

  int res = vec[0];
  for(int i=0; i<n; i++)
  {
    res = res & vec[i];
  }

  for(int x:s)
  {
    res = res | (1<<x);
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