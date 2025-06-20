#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  vector<long long>vec(n);
  set<int>a,b;
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
    a.insert(vec[i]);
  }

  sort(vec.begin(), vec.end());
  int l = 0, r=n-1;
  long long tmp = vec[l]*vec[r];
  while(l<=r)
  {
    if(vec[l]*vec[r]!=tmp)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    l++;
    r--;
  }
  a.insert(1);
  a.insert(tmp);
  for(int i=1; i<sqrt(tmp)+1; i++)
  {
    if(tmp%i==0)
    {
        b.insert(i);
        b.insert(tmp/i);
    }
  }

  if(a==b)
  {
    cout<<tmp<<endl;
  }
  else
  {
    cout<<-1<<endl;
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