#include<bits/stdc++.h>
using namespace std;

bool prime[1000100] = {true};

void Sieve(int n)
{
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) 
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}


int solve()
{
    long long int x;
    cin>>x;
    if (x==1)
    {
        cout<<"NO\n"; 
        return;
    }
    long long int root = sqrt(x);
    if(root*root == x && prime[root])
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}

int main()
{
    int n = 1000000;
    Sieve(n);
    int t;
    cin>>t;
    while(t--)
    {
        solve();   
    }
}