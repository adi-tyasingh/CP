#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  
  if(n%2==0)
  {
    for(int i=0; i<n-2; i++)
    {
      cout<<2<<" ";
    }
    cout<<3<<" "<<1<<endl;
  }
  else
  {
    for(int i=0; i<n-1; i++)
    {
      cout<<1<<" ";
    }
    cout<<1<<endl;
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