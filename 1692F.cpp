#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin>>n;
    vector<int>vec;
    long long x;
    for(int i=0; i<n ;i++)
    {
        cin>>x;
        x = x%10;
        if(count(vec.begin(), vec.end(), x)<3)
        {
            vec.push_back(x);
        }
    }

    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec.size();j++)
        {
            for(int k=0;k<vec.size();k++)
            {
                if((vec[i]+vec[j]+vec[k])%10 == 3 && i!=j && j!=k && i!=k)
                {
                    cout<<"YES\n";
                    return 0;
                }
            }
        }
    }

    cout<<"NO\n";
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