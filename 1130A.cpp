#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,pos=0,neg=0,z=0; cin>>n;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        if(x>0)
        {
            pos++;
        }
        else if(x<0)
        {
            neg++;
        }
        else
        {
            z++;
        }
    }
    if(z>ceil((n+0.0)/2.0))
        {
            cout<<0;
        }
        else if(pos>=ceil((n+0.0)/2.0))
        {
            cout<<1;
        }
        else if(neg>=ceil((n+0.0)/2.0))
        {
            cout<<-1;
        }
        else
        {
            cout<<0;
        }
}