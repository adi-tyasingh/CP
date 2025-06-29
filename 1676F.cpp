#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, k;
  cin>>n>>k;
  map<long long, long long>mp;
  for(int i=0; i<n; i++)
  {
    int x;
    cin>>x;
    mp[x]++;
  }
  vector<long long>v;
  for(auto it = mp.begin(); it!=mp.end(); it++)
  {
    if(it->second>=k)
    {
        v.push_back(it->first);
    }
  }
  if(v.size()==0)
  {
    cout<<-1<<endl;
    return 0;
  }
  if(v.size()==1)
  {
    cout<<v[0]<<" "<<v[0]<<endl;
    return 0;
  }
  int ml=v[0],mr=v[0],l=v[0],r=v[0],dist=1, md = -1;
  for(int i=1; i<v.size(); i++)
  {
    if(v[i]==v[i-1]+1)
    {
        dist++;
        //cout<<dist<<"--\n";
        if(md<dist)
        {
            md = dist;
            r=v[i];
            ml = l;
            mr = r;
        }
    }
    else
    {
        l = v[i];
        dist = 1;
    }
  }
  cout<<ml<<" "<<mr<<endl;
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