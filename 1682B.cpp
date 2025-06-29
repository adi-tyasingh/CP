#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  vector<int>vec(n);
  int tmp = INT_MAX;
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
    if(vec[i]!=i)
    {
        tmp = tmp & vec[i];
    }   
  }
  cout<<tmp<<endl;
  
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