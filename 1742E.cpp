#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long n,q, sum=0, msf=-1;
  cin>>n>>q;
  vector<long long>prefix(n+1,0), mx(n);
  prefix[0] = 0;
  for(int i=0; i<n; i++)
  {
    long long x;
    cin>>x;
    sum += x;
    msf = max(msf, x);
    mx[i] = msf;
    prefix[i+1] = sum;    
  }
  for(int i=0; i<q; i++)
  {
    long long x;
    cin>>x;
    int ind = upper_bound(mx.begin(), mx.end(), x) - mx.begin();
    cout<<prefix[ind]<<" ";
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