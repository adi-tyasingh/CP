#include <bits/stdc++.h>
using namespace std;



int solve()
{
  string s;
  cin>>s;
  char start = min(s[0], s[s.length()-1]);
  char end = max(s[0], s[s.length()-1]);
  
  vector<pair<char, int>>vec;
  for(int i=0; i<s.length(); i++)
  {
    if( start <= s[i] && s[i] <= end)
    {
      vec.push_back({s[i], i+1});
    }
  }

  if(vec.size()>2){
    if(s[0]>s[s.length()-1])
      sort(vec.begin()+1, vec.end()-1, greater<pair<char, int>>());
    else
      sort(vec.begin()+1, vec.end()-1);
  }

  cout<<abs(end-start)<<" "<<vec.size()<<endl;
  for(int i=0; i<vec.size(); i++)
  {
    cout<<vec[i].second<<" ";
  }
  cout<<endl;
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