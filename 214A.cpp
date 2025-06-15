#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int k = 0;
    for(int i=0;i<1001;i++)
    {
        for(int j=0;j<1001;j++)
        {
            int v1 = (i*i + j);
            int v2 = (j*j + i); 
            if(v1==a && v2==b)
            {
                k++;
            }
        }
    }
    cout<<k<<endl;
}