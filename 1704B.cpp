#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, x, res = 0;
  cin>>n>>x;
  vector<long long>vec(n);
  for(int i=0; i<n; i++){
    cin>>vec[i];
  }
  long long ts = vec[0], tl = vec[0];
  for(int i=0; i<n; i++){
    tl = max(tl, vec[i]) ;
    ts = min(ts, vec[i]);
    if ( tl - ts > 2*x ){
        res++;
        ts = vec[i];
        tl = vec[i];
    }
  }
  cout<<res<<endl;
  return 0;  
}

int main()
{
  int tc;
  cin>>tc;
  while(tc--){
    solve();
  }
}
