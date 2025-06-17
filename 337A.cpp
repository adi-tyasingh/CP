#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n,m;
    cin>>n>>m;
    int ans=1001;
    vector<int>vec(m);
    for(int i=0;i<m;i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<m-n+1;i++)
    {
        ans = min(ans, (vec[i+n-1]-vec[i]));
    }
    cout<<ans<<endl;
}