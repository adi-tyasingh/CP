#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int count=0,countMax = -1;
    for(int i=0;i<n;i++)
    {
        int a,b; cin>>a>>b;
        count += (b - a);
        countMax = max(countMax, count);
    }
    cout<<countMax;
}