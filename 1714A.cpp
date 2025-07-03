#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, h, m, resh, resm, mins;
  cin>>n>>h>>m;
  int start = h*60 + m;
  int fd = 24*60; 
  vector<int>vec(n);
  for(int i=0; i<n;i++)
  {
    int x,y; 
    cin>>x>>y;
    vec[i] = x*60 + y;
  }
  sort(vec.begin(), vec.end());
  auto greater = lower_bound(vec.begin(), vec.end(), start);
  if(greater == vec.end())
  {
    mins = ((fd - start) + vec[0]); 
  } 
  else
  {
    mins = *greater - start;
  }
  resh = mins/60 ;
  resm = mins%60 ;
  cout<<resh<<" "<<resm<<endl;
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