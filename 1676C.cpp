#include <bits/stdc++.h>
using namespace std;

int diff(string a, string b , int l)
{
    int d=0;
    for(int i=0; i<l ; i++)
    {
        int p = a[i];
        int q = b[i];
        d += abs(p-q);
    }
    //cout<<"fuck"<<d<<endl;
    return d;
}

int solve()
{
  int n, l;
  cin>>n>>l;
  vector<string>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }
  int res = 100000;
  for(int i=0; i<n; i++)
  {
    for(int j=i; j<n; j++)
    {
        if (i==j) continue;
        res = min(res, diff(vec[i], vec[j], l));
    }
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