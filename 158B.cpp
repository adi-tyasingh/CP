#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin>>n;
    int res = 0, count_threes = 0, count_twos = 0, count_ones = 0;
    vector<int>vec(n);
    for (int i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    for(int i=0;i<n;i++)
    {
        if (vec[i] == 4)
        {
            res++;
        }
        else if (vec[i] == 3)
        {
            res++;
            count_threes++;
        }
        else if( vec[i]==2 )
        {
            count_twos++;
            if(count_twos%2==0)
            {
                res++; 
                count_twos = 0;
            }
        }
        else
        {
            count_ones++;
        }
    }
    if (count_twos)
    {
        res++;
    }
    count_ones -= count_threes;
    count_ones -= 2*count_twos;
    if(count_ones>0)
    {
        res += ceil((count_ones*1.0)/4.00);
    }
    cout<<res;
}

int main()
{
    solve();
}