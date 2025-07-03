#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, d;
  cin>>n>>d;
  vector<int>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }
  sort(vec.begin(), vec.end());
  int l=0, r=n-1;
  int res = 0, temp = 0, mult=1;
  while(l<=r)
  {
    //cout<<l<<" "<<r<<endl;
    temp = mult * vec[r];
    //cout<<temp<<endl;
    if(temp > d)
    {
        res++;
        temp = 0;
        mult=1;
        r--;
    }
    else
    {
        l++;
        mult++;    
    }
  }
  cout<<res<<endl;
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