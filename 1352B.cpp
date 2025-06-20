#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long n, k;
  cin>>n>>k;
  if(k>n)
  {
    cout<<"NO\n";
    return 0;
  }
  
  if(n&1 && k&1)
  {
    cout<<"YES\n";
    for(int i=1; i<k; i++)
    {
        cout<<1<<" ";
    }
    cout<<n-k+1<<endl;
    return 0;
  }
  else if(!(n&1))
  {
    if(n>2*(k-1))
    {
        cout<<"YES\n";
        for(int i=1; i<k; i++)
        {
            cout<<2<<" ";
        }
        cout<<n-(2*(k-1))<<endl;
        return 0;
    }
    else if(!(k&1))
    {
        cout<<"YES\n";
        for(int i=1; i<k; i++)
        {
            cout<<1<<" ";
        }
        cout<<n-k+1<<endl;
        return 0;
    }
  }
  cout<<"NO\n";
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