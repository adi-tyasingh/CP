#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, res =0;
  cin>>n;
  vector<int>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }
  int l = 0, r = n-1, a = vec[l], b = vec[r];
  while(l<r)
  {
    if(a == b)
    {
        res = max(res, l + 1 + (n-1-r) +1);
        l++; 
        a += vec[l];
    }
    else if(a<b)
    {
        l++;
        a += vec[l];
    }
    else
    {
        r--;
        b += vec[r];
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