#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a=0,b=1;
    if (n==0)
    {
        cout<<"0 0 0\n";
        return 0;
    }
    else if(n==1)
    {
        cout<<"1 0 0\n";
        return 0;
    }
    else if (n==2)
    {
        cout<<"1 1 0\n";
        return 0;
    }
    while(a+b != n)
    {
        long long tmp = b;
        b = a + b;
        a = tmp;
    }
    cout<<a<<" "<<b<<" "<<0<<endl;
}