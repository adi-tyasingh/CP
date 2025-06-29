#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  vector<int>vec(n);
  unordered_map<int, int>mp;
  for(int i=0; i<n; i++)cin>>vec[i];
  
  for(int i=0; i<n; i++)
  {
    mp[vec[i]]++;
    if(mp[vec[i]]>2)
    {
        cout<<vec[i]<<endl;
        return 0;
    }
  }
  cout<<"-1"<<endl;
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