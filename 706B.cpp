#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<long long>vec(n);
    unordered_map<long long,long long>umap;
    set<long long>s;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int q; cin>>q;
    for(int i=0;i<q;i++)
    {
        long long m; cin>>m;
        auto it = upper_bound(vec.begin(),vec.end(),m);
        cout<<it-vec.begin()<<endl;
    }
}