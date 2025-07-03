#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long n, k, b, s;
  cin>>n>>k>>b>>s;
  vector<long long>res(n);
  res[0] = k*b;
  s -= k*b;
  if(s<0)
  {
    cout<<-1<<endl;
    return 0;
  }
  for(int i=0; i<n; i++){
    res[i] += min(k-1, s);
    s -= min(k-1, s);
  }
  if(s>0)
  {
    cout<<-1<<endl;
    return 0;
  }
  for(int i=0; i<n; i++)
  {
    cout<<res[i]<<" ";
  }
  cout<<endl;
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

