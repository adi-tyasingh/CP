//INBUILT B. SEARCH

#include <bits/stdc++.h>
using namespace std;

vector<long long>vec;
int solve()
{
  long long n;
  cin>>n;
  for(long long i=1; i*i*i< n; i++)
  {
    long long tmp = n - i*i*i;
    auto it = lower_bound(vec.begin(), vec.end(), tmp);
    if(*it == tmp)
    {
        cout<<"YES\n";
        return 0;
    }
  }
  cout<<"NO\n";
  return 0;  
}


int main()
{
  for(long long i=1; i<=1e4; i++)
  {
    vec.push_back(i*i*i);
  }
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}