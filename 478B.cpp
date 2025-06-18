#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, m;
  cin>>n>>m;
  if(n==m)
  {
    cout<<"0 0"<<endl;
    return 0;
  }
  // mn will occur (m - (n%m)) times
  // mx will occur (n%m) times
  long long mn = (n/m), mx=(n/m)+1, a=n-m+1;
  long long kmin = (m-(n%m))*((mn*(mn-1))/2) + ((n%m))*((mx*(mx-1))/2);
  long long kmax = (a*(a-1))/2;
  cout<<kmin<<" "<<kmax<<endl;  
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