#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  bool flag = false;
  map<int,int>mp;
  for(int i=0; i<n; i++)
  {
    int x;
    cin>>x;
    mp[x]++;
    //cout<<"--x: "<< x<<" mp[x] "<<mp[x]<<endl;
    if(mp[x]>1 && !flag)
    {  
        cout<<"NO\n";
        flag = true;   
    }
  }
  if (!flag)
    cout<<"YES\n";
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