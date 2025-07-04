#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> coprimes(1001); 

int solve()
{
    vector<vector<int>>indexes(1001);
    long long n;
    cin >> n;
    int res = -1;
    for (int i=1 ; i<n+1 ; i++)
    {
        int x = 0;
        cin >> x;
        indexes[x].push_back(i);
    }

    for(int i=1; i<1001; i++)
    {
        for(int j : coprimes[i] )
        {
            if(!indexes[i].empty() && !indexes[j].empty() )
            {
                res = max(res, indexes[i].back() + indexes[j].back());  
            }
        }
    }

    cout<<res<<endl;
    return 0;
}

int main()
{
    for(int i=1;i<1001;i++)
    {
        for(int j=1;j<1001;j++)
        {
            if(__gcd(i,j)==1)
            {
                coprimes[i].push_back(j);
            }
        }
    }

    int TC;
    cin>>TC;
    while(TC--)
    {
        solve();
    }
    return 0;
}