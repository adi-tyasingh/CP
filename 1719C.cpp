#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n,k; 
  cin>>n,k;
  vector<int>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }

  int maxsf = 0;
  vector<int>wins(n);
  
    if(vec[1] > vec[0])
    {
        wins[1] += 1;
        maxsf = vec[1];
    }
    else
    {
        wins[0] += 1;
        maxsf = vec[0];
    }
  
  for(int i=0; i<n; i++)
  {
    
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