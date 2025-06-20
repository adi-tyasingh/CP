#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, res = 0, max_num=-1;
    cin>>n;
    vector<int>vec(n);
    for(int &x:vec){
        cin>>x;
    }

    map<int, int>mp;
    for(int x:vec){
        mp[x]=mp[x-1]+1;
        if(mp[x]>res){
            res=mp[x];
            max_num=x;
        }
    }

    cout<<res<<endl;

    int start = max_num-res+1;
    vector<int>ans;

    for(int i=0, curr=start; i<n && curr<=max_num; i++){
        if(vec[i] == curr){
            ans.push_back(i+1); 
            curr++;
        }
    }

    for (int x: ans)
    {
        cout<<x<<" ";
    }
    cout<<endl;
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



/*

DP[X]= DP[X-1]+1
DP[X]>CURR_MAX
CURR_MAX=DP[X] 

DP:

1:0
2:1
3:2
4:3
5:4
6:0
7:1
8:2
9:3


VEC: 3 2 5 3 7 8 4 5 9 

New Problem statement: Create DP formula for identifying longest increasing subsequence in vector(not necessarily consecutive)

*/