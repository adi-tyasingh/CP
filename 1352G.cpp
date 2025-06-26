#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  if(n<4)
  {
    cout<<"-1"<<endl;
    return 0;
    cout<<"why TF are you looking at this?";
  }
  int k = n&1 ? n : n-1; 
  for(int i=k; i>0; i-=2)  
  {
    cout<<i<<" ";
  }
  cout<<"4 2 ";
  for(int i=6; i<=n; i+=2)
  {
    cout<<i<<" ";
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