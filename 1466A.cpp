#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,count=0;
    cin>>n;
    vector<int>vec(n);
    unordered_map<int,int>map;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int val = vec[j] - vec[i];
            if(map[val]==0)
            {
                count++;
            }
            map[val]++;
        }
    }

    cout<<count<<endl;
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