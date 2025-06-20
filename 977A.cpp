#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num;
    cin>>num;
    int k; cin>>k;
    for(int i=0;i<k;i++)
    {
        if(num%10==0)
        {
            num = num/10;
        }
        else
        {
            num--;
        }
    }
    cout<<num;
}    //