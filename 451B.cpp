    #include <bits/stdc++.h>
    using namespace std;

    int solve()
    {
    int n;
    cin>>n;
    vector<long long>vec(n);
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    bool dec = false;
    int dc = 0, start = -1, e=-1;

    for(int i=0; i<n-1; i++)
    {
        if(vec[i] > vec[i+1] && !dec)
        {
            dec = true;
            dc++;
            if(dc >1) break;
            start = i;
        }
        
        if(dec && vec[i] < vec[i+1])
        {
            dec = false;
            e = i;
        }
    }

    //cout<<"dc:-----"<<dc<<endl;

    if(dc == 0)
    {
        cout<<"yes\n";
        cout<<1<<" "<<1<<endl;
        return 0;
    }
    if(dc != 1)
    {
        cout<<"no\n";
        return 0;
    }

    //cout<<"st: "<<start<<" end:"<<e<<endl;

    if(start == 0 && e==-1){
        e = n-1;
    }
    else if(start==0)
    {
        if(vec[start] > vec[e+1])
        {
            cout<<"no\n";
            return 0;
        }
    }
    else if(e == -1)
    {
        e = n-1;
        //cout<<"Check"<<endl;
        if(vec[e] < vec[start - 1])
        {
            cout<<"no\n";
            return 0;
        }
    }
    else 
    {
        //cout<<"Check"<<endl;
        //cout<<" vec[e] < vec[start + 1] "<< (vec[e] < vec[start + 1])<< endl;
        if(vec[e] < vec[start - 1] || vec[start] > vec[e+1])
        {
            cout<<"no\n";
            return 0;
        }
    }
    

    cout<<"yes\n";
    cout<<start+1<<" "<<e+1<<endl;

    return 0;  
    }


    int main()
    {
    int tc = 1;
    //cin>>tc;
    while(tc--)
    {
        solve();
    }

    }