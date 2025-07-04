#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long n, res = 1e18, p,q; 
  cin>>n;
  int a = 1;
  for(long long k = 2; k*k <= n; k++)
  {
    if(n%k==0)
    {
      a = n/k;
      break;
    }
  }
  cout<<a<<" "<<n-a<<endl;
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