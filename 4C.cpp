#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  unordered_map<string, int> map;
  for(int i=0; i<n; i++)
  {
    string str;
    cin>>str;
    if(map.count(str)==0)
    {
        cout<<"OK"<<endl;
    }
    else
    {
        cout<<str<<map[str]<<endl;
    }
    map[str]+= 1;
  }
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