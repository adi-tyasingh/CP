#include <bits/stdc++.h>
using namespace std;

int solve()
{
  string s;
  cin>>s;
  if(s.length() < 11)
  {
    cout<<s<<endl;
  }
  else
  {
    cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
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

vector<int>vec(n);
