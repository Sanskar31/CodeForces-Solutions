/*
Author: Sanskar Agarwal
Nick: sanskaragarwal
Birla Institute Of Technology, Mesra
*/
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define max 1000000000

using namespace std;


int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector< pair<int, int>> adj[n+1];
    for(int i=0;i<m;++i)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back(make_pair(b,c));
        adj[b].push_back(make_pair(a,c));
    }
    if(k==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    bool f[n+1];
    memset(f, false, sizeof(f));
    for(int i=0;i<k;++i)
    {
        int c;
        cin>>c;
        f[c]=true;
    }
    set<int> s;
    for(int i=1;i<=n;++i)
    {
        if(f[i])
        {
            set<int> d;
            for(int j=0;j<adj[i].size();++j)
            {
                int node= adj[i][j].first, dist= adj[i][j].second;
                if(!f[node])
                {
                    d.insert(dist);
                }
            }
            if(d.empty())
            {
                continue;
            }
            s.insert(*d.begin());
        }
    }
    if(s.empty())
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<*s.begin()<<endl;
    return 0;
}