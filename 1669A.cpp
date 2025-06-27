#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  if(n<1400)
  {
    cout<<"Division 4"<<endl;
  }
  else if(n<1600)
  {
    cout<<"Division 3"<<endl;
  }
  else if(n<1900)
  {
    cout<<"Division 2"<<endl;
  }
  else
  {
    cout<<"Division 1"<<endl;
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