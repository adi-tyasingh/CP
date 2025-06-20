#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long n,k;
  cin>>n>>k;
  if(n%2!=k%2 || n<k)
  {
    cout<<"NO\n";
    return 0;
  }
  n = n - k;
  if(n >= k*(k-1))
  {
    cout<<"YES\n";
  }
  else
  {
    cout<<"NO\n";
  }
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