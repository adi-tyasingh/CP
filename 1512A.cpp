#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int n,m=1000,M=-1,i1,i2;
    cin>>n;
    vector<int>vec(n);
    unordered_map<int,int>map;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        map[vec[i]]++;
        m =  min(m, vec[i]);
        M = max(M,vec[i]);
    }

    if(map[M]>map[m])
    {
        cout<<
    }

    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}