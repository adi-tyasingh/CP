#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t;
    while (t--)
    {
        int n;
        bool flag = true;
        cin>>n;
        vector<int> b(n);
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        a[0] = b[0];
        for(int i=1;i<n;i++)
        {
            int p,q;
            a[i] = b[i] + a[i-1];
            p = abs(b[i] + a[i-1]);
            q = abs(b[i] - a[i-1]);
            if(abs(p-a[i-1]) == b[i] && b[i]== abs(q-a[i-1]) && p!=q)
            {
                flag=false;
                break;
            }
        }
        if (flag)
        {
            for(int i=0;i<n;i++)
                cout<< a[i] <<" ";
        }
        else
        {
            cout<< -1;
        }
        cout<<endl;
    }
}