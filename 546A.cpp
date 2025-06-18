#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,w,n; cin>>k>>n>>w;
    long long total = (k*(w)*(w+1))/2;
    if(total>n)
    {
        cout<<total-n<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
}