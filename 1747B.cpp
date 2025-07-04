#include <bits/stdc++.h>
using namespace std;


/* Observation: 
BAN will not be a subsequence of the string if all of the Ns are placed before the all of the Bs
*/ 
int solve()
{
  int n;
  cin>>n;
  int moves = n/2;
  if(n%2!=0)
  {
    moves++;
  }
  cout<<moves<<endl;
  int l=1, r=3*n;
  while(r>l)
  {
    cout<<l<<" "<<r<<"\n";
    l+=3;
    r-=3;
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