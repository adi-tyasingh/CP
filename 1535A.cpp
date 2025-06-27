#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>vec(4);
        cin>>vec[0]>>vec[1]>>vec[2]>>vec[3];
        int p1 = max(vec[0],vec[1]);
        int p2 = max(vec[2],vec[3]);
        sort(vec.begin(),vec.end());
        if(p1==vec[2] && p2==vec[3])
        {
            cout<<"YES"<<endl;
        }
        else if (p1==vec[3] && p2==vec[2])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}