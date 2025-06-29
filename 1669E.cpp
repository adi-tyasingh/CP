#include <bits/stdc++.h>
using namespace std;

int solve()
{
  vector<string>chars = {"a","b", "c", "d", "e", "f","g","h","i","j","k"};  
  int n;
  cin>>n;
  long long res = 0;
  vector<string>vec(n);
  map<string, int>mp;
  for (int i=0; i<n ; i++){
    cin>>vec[i];
  }

  for(int i=0; i<n; i++)
  {
    for(string c : chars)
    {
        string t1 = vec[i][0] + c;
        string t2 = c + vec[i][1];
        res += mp[t1];
        res += mp[t2];
    }
    res -= 2* mp[vec[i]];
    mp[vec[i]]++;
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