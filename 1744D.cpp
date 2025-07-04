#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, ec=0, k=0;
  cin>>n;
  vector<int>vec(n);
  for(int i=1; i<n+1; i++)
  {
    cin>>vec[i];
    if(vec[i]%2==0)
    {
        ec++;
    }
    else if((vec[i]+i)%2==0)
    {
        k++;
    }
  }

  if(ec >= n)
  {
    cout<<0<<endl;
  }
  else if(ec+k>=n)
  {
    cout<< n-ec <<endl;
  }
  else
  {
    cout<<"-1"<<endl;
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