#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>vec(4);
        int count = 0;
        for(int i=0;i<4;i++)
        {
            cin>>vec[i];
        }
        for(int i=1;i<4;i++)
        {
            if (vec[i]>vec[0])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}