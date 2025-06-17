#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n,m;
  cin>>n>>m;
  int t = min(m,n);
  if(t%2==0)
  {
    cout<<"Malvika\n";
  }
  else
  {
    cout<<"Akshat\n";
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