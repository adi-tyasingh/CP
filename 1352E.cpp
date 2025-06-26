#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  vector<int>vec(n);
  unordered_map<int, int>mp;
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
    mp[vec[i]]++;
  }
  long long sum = 0, res = 0;
  for (int i=0; i<n; i++)
  {
    sum = 0;
    for(int j=i; j<n; j++)
    {
      sum += vec[j];
      if(j==i)
      {
        continue;
      }
      if(sum>n)
      {
        break;
      }
      res += mp[sum];
      mp[sum] = 0;
    }
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