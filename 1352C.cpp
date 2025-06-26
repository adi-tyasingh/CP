#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long n,k;
  cin>>n>>k;
  long long d = k/(n-1);
  long long tmp = n*d;
  long long rem = k%(n-1);
  if(rem==0)
  {
    cout<<tmp-1<<endl;
  }
  else
  {
    cout<<tmp+rem<<endl;
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