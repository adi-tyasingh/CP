#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        vector<int>vec(3);
        cin>>vec[0]>>vec[1]>>vec[2];
        sort(vec.begin(),vec.end());
        cout<<vec[1]<<endl;
    }
}
