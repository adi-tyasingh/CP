#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long res = 0;
    int n;
    cin>>n;
    int m = -1;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        m = max(m,vec[i]);
    }

    for(int i = 0;i<n;i++)
    {
        res += abs(m-vec[i]);
    }
    cout<<res<<endl;
}