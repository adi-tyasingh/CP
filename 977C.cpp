#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, k;
    cin>>n>>k;
    vector<int>vec(n);
    for(int &x:vec) cin>>x;
    sort(vec.begin(), vec.end());
    if(k>0 && k<n && abs(vec[k]-vec[k-1]) != 0)
    {
        cout<<vec[k-1]<<endl;
    }
    else if(k==0 && vec[0]>1)
    {
        cout<<1<<endl;
    }
    else if(k==n)
    {
        cout<<vec[n-1]<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}

int32_t main()
{
    int tc=1;
    //cin >> tc;
    while (tc--)
    {
        solve();
    }
}
