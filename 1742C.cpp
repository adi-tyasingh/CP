#include <bits/stdc++.h>
using namespace std;

int solve()
{
  vector<string> mat(8);
  char res = ' '; 
  for(int i=0; i<8; i++)
  {
    cin>>mat[i];
    if (count(mat[i].begin(), mat[i].end(), 'R')==8)
    {
        res = 'R';
    }
  }
  if(res == ' ')
  {
    res = 'B';
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