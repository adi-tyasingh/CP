#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    multiset<int>ms;
    for(int &x:vec){
        cin>>x;
        ms.insert(x);
    }

    for(int i=0; i<n; i++)
    {
        multiset<int>tmp(ms.begin(), ms.end());
        vector<int>res;
        int start = vec[i];
        res.push_back(start);
        tmp.erase(start);
        while(tmp.size()>0)
        {
            if(start%3==0 && tmp.count(start/3))
            {
                tmp.erase(tmp.find(start/3));
                start = start/3;
                
            }
            else if(tmp.count(start*2))
            {
                tmp.erase(tmp.find(start*2));
                start = start*2;
            }
            else
            {
                break;            
            }
            res.push_back(start);
        } 
        if(tmp.size()==0)
        {
            for(int x:res){
                cout<<x<<" ";
            }
            cout<<endl;
            break;
        }
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
