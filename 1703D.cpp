#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int>maps;

char check_str(string s)
{
    int l = s.length();
    for(int i=1; i<l; i++)
    {
        string lf = s.substr(0, i);
        string rh = s.substr(i, l-i);
        if(maps[lf]>0 && maps[rh]>0)
        {
            return '1';
        }
    }
    return '0';
}

int solve()
{
  maps.clear();
  string res = "";
  int n= 0;
  cin>>n;
  vector<string>vec(n);
  
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
    maps[vec[i]]++;
  }

  for(int i=0;i<n;i++)
  {
    res += check_str(vec[i]);
  }
  cout<<res<<endl;
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