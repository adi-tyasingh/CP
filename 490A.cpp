#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res = 0;
    cin>>n;
    vector<int>v(n+1),p,m,e;
    for(int i=1;i<n+1;i++)
    {
        cin>>v[i];
        if(v[i]==1){
            p.push_back(i);
        }
        else if(v[i]==2){
            m.push_back(i);
        }
        else
        {
            e.push_back(i);
        }
    }
    int k = min(p.size(),min(m.size(),e.size()));
    cout<<k<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<p[i]<<" "<<m[i]<<" "<<e[i]<<endl;
    }
}