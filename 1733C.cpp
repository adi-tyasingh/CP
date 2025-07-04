#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  vector<int>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }
  if(n == 1)
  {
    cout<<0<<endl;
    return 0;
  }

  cout<<n-1<<endl;
  cout<<1<<" "<<n<<endl;
  for(int i=1; i<n-1; i++)
  {
    if((vec[0]+vec[i])%2==0)
    {
        cout<<i+1<<" "<<n<<endl;
    }      
    else
    {
        cout<<1<<" "<<i+1<<endl;
    }
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
